#include "Game_DB_Message.h"


MSG_150000::MSG_150000(void){
	reset();
}

void MSG_150000::serialize(Block_Buffer &buffer) const {
}

int MSG_150000::deserialize(Block_Buffer &buffer) {
	return 0;
}

void MSG_150000::reset(){
}

MSG_550000::MSG_550000(void){
	reset();
}

void MSG_550000::serialize(Block_Buffer &buffer) const {
	uint16_t __db_cache_vec_vec_size = db_cache_vec.size();
	buffer.write_uint16(__db_cache_vec_vec_size);
	for(uint16_t i = 0; i < __db_cache_vec_vec_size; ++i) {
		db_cache_vec[i].serialize(buffer);
	}

}

int MSG_550000::deserialize(Block_Buffer &buffer) {
	uint16_t __db_cache_vec_vec_size = buffer.read_uint16();
	Player_DB_Cache v;
	for(uint16_t i = 0; i < __db_cache_vec_vec_size; ++i) {
		if(v.deserialize(buffer))
			return -1;
		db_cache_vec.push_back(v);
	}

	return 0;
}

void MSG_550000::reset(){
	db_cache_vec.clear();
}

MSG_150001::MSG_150001(void){
	reset();
}

void MSG_150001::serialize(Block_Buffer &buffer) const {
	account_info.serialize(buffer);
}

int MSG_150001::deserialize(Block_Buffer &buffer) {
	account_info.deserialize(buffer);
	return 0;
}

void MSG_150001::reset(){
	account_info.reset();
}

MSG_550001::MSG_550001(void){
	reset();
}

void MSG_550001::serialize(Block_Buffer &buffer) const {
	player_data.serialize(buffer);
}

int MSG_550001::deserialize(Block_Buffer &buffer) {
	player_data.deserialize(buffer);
	return 0;
}

void MSG_550001::reset(){
	player_data.reset();
}

MSG_150002::MSG_150002(void){
	reset();
}

void MSG_150002::serialize(Block_Buffer &buffer) const {
	player_info.serialize(buffer);
}

int MSG_150002::deserialize(Block_Buffer &buffer) {
	player_info.deserialize(buffer);
	return 0;
}

void MSG_150002::reset(){
	player_info.reset();
}

MSG_550002::MSG_550002(void){
	reset();
}

void MSG_550002::serialize(Block_Buffer &buffer) const {
	player_data.serialize(buffer);
}

int MSG_550002::deserialize(Block_Buffer &buffer) {
	player_data.deserialize(buffer);
	return 0;
}

void MSG_550002::reset(){
	player_data.reset();
}

MSG_150003::MSG_150003(void){
	reset();
}

void MSG_150003::serialize(Block_Buffer &buffer) const {
	player_data.serialize(buffer);
}

int MSG_150003::deserialize(Block_Buffer &buffer) {
	player_data.deserialize(buffer);
	return 0;
}

void MSG_150003::reset(){
	player_data.reset();
}

MSG_550003::MSG_550003(void){
	reset();
}

void MSG_550003::serialize(Block_Buffer &buffer) const {
	buffer.write_int64(role_id);
}

int MSG_550003::deserialize(Block_Buffer &buffer) {
	role_id = buffer.read_int64();
	return 0;
}

void MSG_550003::reset(){
	role_id = 0;
}

MSG_150004::MSG_150004(void){
	reset();
}

void MSG_150004::serialize(Block_Buffer &buffer) const {
	buffer.write_int64(role_id);
	mail_detail.serialize(buffer);
}

int MSG_150004::deserialize(Block_Buffer &buffer) {
	role_id = buffer.read_int64();
	mail_detail.deserialize(buffer);
	return 0;
}

void MSG_150004::reset(){
	role_id = 0;
	mail_detail.reset();
}
