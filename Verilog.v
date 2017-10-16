module TrainGate(A,B,C,D,Gx,Gy);
	input A,B,C,D;
	output Gx,Gy;
	or  G1(Gx,A,B);
	or  G2(Gy,C,D);
endmodule

module testbench;
	reg A,B,C,D;
	wire Gx,Gy;
	TrainGate DUT(A,B,C,D,Gx,Gy);
	initial
		begin
			$monitor($time,"   A=%b,B=%b,C=%b,D=%b    Gx=%b,Gy=%b",A,B,C,D,Gx,Gy);
			$dumpfile("traingate.vcd");
			$dumpvars(0,testbench);
			#5 A=1;B=0;C=0;D=1;
			#5 A=0;B=0;C=1;D=1;
			#5 A=1;C=0;
			#5 A=1;D=0;
			#5 B=0;C=1;
			#5 A=0;B=0;C=0;D=1;
			#5 A=0;B=1;C=1;D=0;
			#5 B=0;C=0;
			#5 $finish;
		end
endmodule
