/*
 * First_Order_IIR_Filter.h
 *
 *  Created on: Jan 27, 2022
 *      Author: hussam
 */

#ifndef FIRST_ORDER_IIR_FILTER_H_
#define FIRST_ORDER_IIR_FILTER_H_


typedef struct
	{
	float alpha;
	float out;

	}FirstOrderIIR;

void FirstOrderIIRFilter_Init(FirstOrderIIR *filter, float alpha);
float FirstOrderIRR_Calculate(FirstOrderIIR *filter, float in);

#endif /* FIRST_ORDER_IIR_FILTER_H_ */



/*
 * First_Order_IIR_Filter.c
 *
 *  Created on: Jan 27, 2022
 *      Author: hussam
 */


#include "First_Order_IIR_Filter.h"

void FirstOrderIIRFilter_Init(FirstOrderIIR *filter, float alpha)
	{
	if(alpha<0.0f){alpha=0.0f;}
	else if (alpha>1.0f){alpha=1.0f;}
	else {filter->alpha=alpha;}
	filter->out=0.0f;
	}
float FirstOrderIRR_Calculate(FirstOrderIIR *filter, float in)
	{

	filter->out=(1.0f-filter->alpha)*in+(filter->alpha)*filter->out;


	return filter->out;
	}
