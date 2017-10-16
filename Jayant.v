module dist(A,B,C,D,B1,B2,B3,B4,B5);
	input A,B,C,D;
	output B1,B2,B3,B4,B5;
	wire a,b,c,d,e;
	and G1(a,B,A);
	and G2(b,B,C);
	or  G3(B5,a,b);
	and G4(B4,A,~B,~C);
	and G5(c,~A,B);
	or 	G6(B3,c,b);
	and G7(d,A,B,~C);
	and G8(e,~A,C);
	or  G9(B2,d,e);
	not G10(B1,~D);
endmodule

module testbench;
	reg A,B,C,D;
	wire B1,B2,B3,B4,B5;
	dist DUT(A,B,C,D,B1,B2,B3,B4,B5);
	initial
		begin
			$monitor($time,"   A=%b,B=%b,C=%b,D=%b    B1=%b ,B2=%b ,B3=%b ,B4=%b ,B5=%b ",A,B,C,D,B1,B2,B3,B4,B5);
			$dumpfile("dist.vcd");
			$dumpvars(0,testbench);
			#5 A=1;B=0;C=0;D=1;
			#5 A=0;B=0;C=1;D=0;
			#5 A=1;C=0;
			#5 A=2;D=0;C=1;
			#5 B=0;C=0;
			#5 A=1;B=0;C=1;D=1;
			#5 A=1;B=1;C=0;D=0;
			#5 B=1;C=1;
			#5 $finish;
		end
endmodule
