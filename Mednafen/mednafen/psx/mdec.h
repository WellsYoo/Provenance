#ifndef __MDFN_PSX_MDEC_H
#define __MDFN_PSX_MDEC_H

namespace MDFN_IEN_PSX
{

void MDEC_DMAWrite(uint32 V);

uint32 MDEC_DMARead(uint32* offs);

void MDEC_Write(const pscpu_timestamp_t timestamp, uint32 A, uint32 V);
uint32 MDEC_Read(const pscpu_timestamp_t timestamp, uint32 A);


void MDEC_Power(void) MDFN_COLD;

bool MDEC_DMACanWrite(void);
bool MDEC_DMACanRead(void);
void MDEC_Run(int32 clocks);

void MDEC_StateAction(StateMem *sm, const unsigned load, const bool data_only);
}

#endif
