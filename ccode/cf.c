  /*
  Version: 1.0
  */
  t2 = dq2*dq2;
  t3 = q2*2.0;
  t4 = q3*2.0;
  t5 = t3+t4;
  t6 = dq2*2.0;
  t7 = dq3*2.0;
  t8 = t6+t7;
  t9 = q3+t3;
  t10 = dq3+t6;
  t11 = q2+q3;
  t12 = cos(t11);
  t13 = dq2+dq3;
  t14 = sin(t11);
  t15 = sin(q3);
  t16 = cos(t9);
  t17 = dq1*dq1;
  t18 = sin(t9);
  t19 = cos(t3);
  t20 = sin(t3);
  t21 = cos(t5);
  t22 = sin(t5);
  t23 = dq3*dq3;
  t24 = cos(q3);
  t25 = t17*t22*1.971255043877417;
  t26 = dq1*t13*t14*1.249251556914913;
  t27 = dq1*dq2*t12*8.514824356129814;
  t28 = dq1*dq3*t12*8.514824356129814;
  A0[0][0] = dq1*3.998967303737318E1-((dq1/fabs(dq1)))*3.45293547711552-t2*cos(q2)*1.145543117113604-t2*sin(q2)*4.575049953315801+dq1*dq3*t15*3.667193657392247+dq1*dq2*t19*1.267212310209567E1-dq1*dq2*t20*1.8271060016264E1+dq1*dq3*t24*4.839646461906149-dq1*t10*t16*4.839646461906149-dq2*t12*t13*8.514824356129814-dq3*t12*t13*8.514824356129814-dq1*t10*t18*3.667193657392247+dq2*t13*t14*1.249251556914913+dq1*t8*t21*2.336817728957687+dq3*t13*t14*1.249251556914913-dq1*t8*t22*1.971255043877417;
  A0[1][0] = dq2*1.390957341900939E1+t25+t26+t27+t28-((dq2/fabs(dq2)))*4.332231215685344+t16*t17*4.839646461906149+t17*t18*3.667193657392247-t17*t19*6.336061551047835+t17*t20*9.135530008131999+t15*t23*3.667193657392247-t17*t21*2.336817728957687+t23*t24*4.839646461906149-dq1*dq2*t14*1.249251556914913-dq1*dq3*t14*1.249251556914913+dq2*dq3*t15*7.334387314784494+dq2*dq3*t24*9.679292923812298-dq1*t12*t13*8.514824356129814;
  A0[2][0] = dq3*3.303500472010499E1+t25+t26+t27+t28-((dq3/fabs(dq3)))*2.253812444834517-t2*t15*3.667193657392247-t2*t24*4.839646461906149-t15*t17*1.833596828696123+t16*t17*2.419823230953075+t17*t18*1.833596828696123-t17*t21*2.336817728957687-t17*t24*2.419823230953075-dq1*dq2*t14*1.249251556914913-dq1*dq3*t14*1.249251556914913-dq1*t12*t13*8.514824356129814;