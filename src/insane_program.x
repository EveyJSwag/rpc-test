struct num_arg_1
{
  unsigned int arg1;
  unsigned int arg2;
};

struct num_arg_2
{
  unsigned int arg1;
  unsigned int arg2;
  unsigned int arg3;
};

struct num_arg_3
{
  unsigned int   arg1;
  unsigned int   arg2;
  unsigned char* arg_name;
};

program NUMBER
{
   version ADD_SUB
   {
      int add_numbers(num_arg_1) = 1;
      int add_numbers_name(num_arg_3) = 2; 
      int sub_numbers(num_arg_1) = 3;
      int sub_numbers_name(num_arg_3) = 4; 
   } = 1;
   version MULT_DIV
   {
      int mult_numbers(num_arg_1) = 1;
      int mult_numbers_name(num_arg_3) = 2; 
      int div_numbers(num_arg_1) = 3;
      int div_numbers_name(num_arg_3) = 4; 
   } = 2;
} = 0x23330001;
