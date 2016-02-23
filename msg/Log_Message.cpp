#include "Log_Message.h"


MSG_180000::MSG_180000(void){
	reset();
}

void MSG_180000::serialize(Block_Buffer &buffer) const {
	buffer.write_int32(pid);
	buffer.write_int64(tid);
	buffer.write_uint8(log_type);
	buffer.write_uint8(log_sub_type);
	buffer.write_uint32(time);
	buffer.write_string(log_str);
}

int MSG_180000::deserialize(Block_Buffer &buffer) {
	pid = buffer.read_int32();
	tid = buffer.read_int64();
	log_type = buffer.read_uint8();
	log_sub_type = buffer.read_uint8();
	time = buffer.read_uint32();
	log_str = buffer.read_string();
	return 0;
}

void MSG_180000::reset(){
	pid = 0;
	tid = 0;
	log_type = 0;
	log_sub_type = 0;
	time = 0;
	log_str.clear();
}

MSG_180001::MSG_180001(void){
	reset();
}

void MSG_180001::serialize(Block_Buffer &buffer) const {
	buffer.write_int64(role_id);
	buffer.write_uint8(log_type);
	buffer.write_uint8(log_sub_type);
	buffer.write_string(file_name);
	buffer.write_string(buf);
}

int MSG_180001::deserialize(Block_Buffer &buffer) {
	role_id = buffer.read_int64();
	log_type = buffer.read_uint8();
	log_sub_type = buffer.read_uint8();
	file_name = buffer.read_string();
	buf = buffer.read_string();
	return 0;
}

void MSG_180001::reset(){
	role_id = 0;
	log_type = 0;
	log_sub_type = 0;
	file_name.clear();
	buf.clear();
}

MSG_185000::MSG_185000(void){
	reset();
}

void MSG_185000::serialize(Block_Buffer &buffer) const {
	buffer.write_int32(id);
	buffer.write_string(name);
}

int MSG_185000::deserialize(Block_Buffer &buffer) {
	id = buffer.read_int32();
	name = buffer.read_string();
	return 0;
}

void MSG_185000::reset(){
	id = 0;
	name.clear();
}

MSG_185001::MSG_185001(void){
	reset();
}

void MSG_185001::serialize(Block_Buffer &buffer) const {
	buffer.write_int64(role_id);
	buffer.write_uint16(level);
	buffer.write_uint32(login_time);
	buffer.write_uint32(logout_time);
	buffer.write_uint32(online_time);
	buffer.write_string(role_name);
	buffer.write_string(account);
	buffer.write_string(client_ip);
}

int MSG_185001::deserialize(Block_Buffer &buffer) {
	role_id = buffer.read_int64();
	level = buffer.read_uint16();
	login_time = buffer.read_uint32();
	logout_time = buffer.read_uint32();
	online_time = buffer.read_uint32();
	role_name = buffer.read_string();
	account = buffer.read_string();
	client_ip = buffer.read_string();
	return 0;
}

void MSG_185001::reset(){
	role_id = 0;
	level = 0;
	login_time = 0;
	logout_time = 0;
	online_time = 0;
	role_name.clear();
	account.clear();
	client_ip.clear();
}
