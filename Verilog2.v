module bcd(A,B,C,D,O1,O2,O3,O4,O5);
	input A,B,C,D;
	output O1,O2,O3,O4,O5;
	wire w1, w2, w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16,w17,M;
	not g1(w1,a);
	not g2(w2,b);
	not g3(w3,c);
	not g4(w4,w2,w3);
	or g5(M,w1,w4);
	and g6(w5,A,B);
	and g7(w6,A,C);
	or g8(w7,w5,w6);
	not g9(w8,B);
	not g10(w9,C);
	and g11(w10,A,w8,w9);
	not g12(w11,A);
	and g13(w12,w11,B);
	not g14(w13,C);
	and g15(w14,A,B,w13);
	not g16(w15,A);
	and g17(w16,w15,C);
	or g18(w17,w14,w16);
	and g19(O1,M,w7);
	and g20(O2,M,w10);
	and g21(O3,M,w12);
	and g22(O4,M,w17);
	and g23(O5,M,D);
endmodule


module testbench;
	reg A,B,C,D;
	wire O1,O2,O3,O4,O5;
	bcd DUT(A,B,C,D,O1,O2,O3,O4,O5);
	initial
		begin
			$monitor($time,"   A=%b,B=%b,C=%b,D=%b    O1=%b ,O2=%b ,O3=%b ,O4=%b ,O5=%b ",A,B,C,D,B1,B2,B3,B4,B5);
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
