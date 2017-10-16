module Railgate(a,b,c,d,x,y);
	input a,b,c,d;
	output x,y;
	x=or(a,b);
	y=or(c,d);
endmodule
module testbench;
	reg a,b,c,d;
	Railgate DUT(a,b,c,d,x,y);

	initial 
		begin
			$monitor($time,"A=%b,B=%b,C=%b,D=%b,X=%b,Y=%b");
			#5 a=1;b=0;c=0;d=1;
			#5 a=1;b=1;c=0;d=1;
			#5 a=0;b=0;c=1;d=0;
			#5 a=1;b=0;c=0;d=0;
			#5 a=0;
			#5 $finish;
		end
endmodule
