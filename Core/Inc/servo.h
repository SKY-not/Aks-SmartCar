//
// Created by ROG on 25-7-3.
//

#ifndef SERVO_H
#define SERVO_H
void Servo_Control_Init(uint16_t Prescaler, uint16_t Period);
void Servo_PWM_Init(uint16_t Prescaler, uint16_t Period);

// 占空比调节函数，可以给TIM的每一个通道分配不同的占空比值
void TIM_SetCompare_CH1(uint16_t Compare, TIM_TypeDef* TIMx);
void TIM_SetCompare_CH2(uint16_t Compare, TIM_TypeDef* TIMx);
#endif //SERVO_H


