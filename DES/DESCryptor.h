#ifndef __DESC_H__
#define __DESC_H__

#include "des.h"
#include <malloc.h>
#include <stdlib.h>
#include <stdint.h>

//3des �����㷨   ��һ������Ϊ���룬�ڶ�������Ϊ���ģ�����������Ϊ��������ģ����ĸ�����Ϊ���ĵ��ֽ���
void FinalD3desEncryption (uint8_t * key , uint8_t * inblock , uint8_t * outbolck , uint32_t inlen);
//3des �����㷨   ��һ������Ϊ���룬�ڶ�������Ϊ���ģ�����������Ϊ��������ģ����ĸ�����Ϊ���ĵ��ֽ���
void FinalD3desDecryption (uint8_t * key , uint8_t *inblock , uint8_t * outbolck , uint32_t inlen);

#endif