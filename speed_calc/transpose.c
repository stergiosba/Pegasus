static inline void transpose(m_elem A[][N], m_elem AT[][N])
{
	AT[0][0] = A[0][0];
	AT[0][1] = A[1][0];
	AT[0][2] = A[2][0];
	AT[0][3] = A[3][0];
	AT[0][4] = A[4][0];
	AT[0][5] = A[5][0];
	AT[0][6] = A[6][0];
	AT[0][7] = A[7][0];
	AT[0][8] = A[8][0];
	AT[0][9] = A[9][0];
	AT[0][10] = A[10][0];
	AT[0][11] = A[11][0];
	AT[0][12] = A[12][0];
	AT[0][13] = A[13][0];
	AT[0][14] = A[14][0];
	AT[0][15] = A[15][0];
	AT[0][16] = A[16][0];
	AT[0][17] = A[17][0];
	AT[1][0] = A[0][1];
	AT[1][1] = A[1][1];
	AT[1][2] = A[2][1];
	AT[1][3] = A[3][1];
	AT[1][4] = A[4][1];
	AT[1][5] = A[5][1];
	AT[1][6] = A[6][1];
	AT[1][7] = A[7][1];
	AT[1][8] = A[8][1];
	AT[1][9] = A[9][1];
	AT[1][10] = A[10][1];
	AT[1][11] = A[11][1];
	AT[1][12] = A[12][1];
	AT[1][13] = A[13][1];
	AT[1][14] = A[14][1];
	AT[1][15] = A[15][1];
	AT[1][16] = A[16][1];
	AT[1][17] = A[17][1];
	AT[2][0] = A[0][2];
	AT[2][1] = A[1][2];
	AT[2][2] = A[2][2];
	AT[2][3] = A[3][2];
	AT[2][4] = A[4][2];
	AT[2][5] = A[5][2];
	AT[2][6] = A[6][2];
	AT[2][7] = A[7][2];
	AT[2][8] = A[8][2];
	AT[2][9] = A[9][2];
	AT[2][10] = A[10][2];
	AT[2][11] = A[11][2];
	AT[2][12] = A[12][2];
	AT[2][13] = A[13][2];
	AT[2][14] = A[14][2];
	AT[2][15] = A[15][2];
	AT[2][16] = A[16][2];
	AT[2][17] = A[17][2];
	AT[3][0] = A[0][3];
	AT[3][1] = A[1][3];
	AT[3][2] = A[2][3];
	AT[3][3] = A[3][3];
	AT[3][4] = A[4][3];
	AT[3][5] = A[5][3];
	AT[3][6] = A[6][3];
	AT[3][7] = A[7][3];
	AT[3][8] = A[8][3];
	AT[3][9] = A[9][3];
	AT[3][10] = A[10][3];
	AT[3][11] = A[11][3];
	AT[3][12] = A[12][3];
	AT[3][13] = A[13][3];
	AT[3][14] = A[14][3];
	AT[3][15] = A[15][3];
	AT[3][16] = A[16][3];
	AT[3][17] = A[17][3];
	AT[4][0] = A[0][4];
	AT[4][1] = A[1][4];
	AT[4][2] = A[2][4];
	AT[4][3] = A[3][4];
	AT[4][4] = A[4][4];
	AT[4][5] = A[5][4];
	AT[4][6] = A[6][4];
	AT[4][7] = A[7][4];
	AT[4][8] = A[8][4];
	AT[4][9] = A[9][4];
	AT[4][10] = A[10][4];
	AT[4][11] = A[11][4];
	AT[4][12] = A[12][4];
	AT[4][13] = A[13][4];
	AT[4][14] = A[14][4];
	AT[4][15] = A[15][4];
	AT[4][16] = A[16][4];
	AT[4][17] = A[17][4];
	AT[5][0] = A[0][5];
	AT[5][1] = A[1][5];
	AT[5][2] = A[2][5];
	AT[5][3] = A[3][5];
	AT[5][4] = A[4][5];
	AT[5][5] = A[5][5];
	AT[5][6] = A[6][5];
	AT[5][7] = A[7][5];
	AT[5][8] = A[8][5];
	AT[5][9] = A[9][5];
	AT[5][10] = A[10][5];
	AT[5][11] = A[11][5];
	AT[5][12] = A[12][5];
	AT[5][13] = A[13][5];
	AT[5][14] = A[14][5];
	AT[5][15] = A[15][5];
	AT[5][16] = A[16][5];
	AT[5][17] = A[17][5];
	AT[6][0] = A[0][6];
	AT[6][1] = A[1][6];
	AT[6][2] = A[2][6];
	AT[6][3] = A[3][6];
	AT[6][4] = A[4][6];
	AT[6][5] = A[5][6];
	AT[6][6] = A[6][6];
	AT[6][7] = A[7][6];
	AT[6][8] = A[8][6];
	AT[6][9] = A[9][6];
	AT[6][10] = A[10][6];
	AT[6][11] = A[11][6];
	AT[6][12] = A[12][6];
	AT[6][13] = A[13][6];
	AT[6][14] = A[14][6];
	AT[6][15] = A[15][6];
	AT[6][16] = A[16][6];
	AT[6][17] = A[17][6];
	AT[7][0] = A[0][7];
	AT[7][1] = A[1][7];
	AT[7][2] = A[2][7];
	AT[7][3] = A[3][7];
	AT[7][4] = A[4][7];
	AT[7][5] = A[5][7];
	AT[7][6] = A[6][7];
	AT[7][7] = A[7][7];
	AT[7][8] = A[8][7];
	AT[7][9] = A[9][7];
	AT[7][10] = A[10][7];
	AT[7][11] = A[11][7];
	AT[7][12] = A[12][7];
	AT[7][13] = A[13][7];
	AT[7][14] = A[14][7];
	AT[7][15] = A[15][7];
	AT[7][16] = A[16][7];
	AT[7][17] = A[17][7];
	AT[8][0] = A[0][8];
	AT[8][1] = A[1][8];
	AT[8][2] = A[2][8];
	AT[8][3] = A[3][8];
	AT[8][4] = A[4][8];
	AT[8][5] = A[5][8];
	AT[8][6] = A[6][8];
	AT[8][7] = A[7][8];
	AT[8][8] = A[8][8];
	AT[8][9] = A[9][8];
	AT[8][10] = A[10][8];
	AT[8][11] = A[11][8];
	AT[8][12] = A[12][8];
	AT[8][13] = A[13][8];
	AT[8][14] = A[14][8];
	AT[8][15] = A[15][8];
	AT[8][16] = A[16][8];
	AT[8][17] = A[17][8];
	AT[9][0] = A[0][9];
	AT[9][1] = A[1][9];
	AT[9][2] = A[2][9];
	AT[9][3] = A[3][9];
	AT[9][4] = A[4][9];
	AT[9][5] = A[5][9];
	AT[9][6] = A[6][9];
	AT[9][7] = A[7][9];
	AT[9][8] = A[8][9];
	AT[9][9] = A[9][9];
	AT[9][10] = A[10][9];
	AT[9][11] = A[11][9];
	AT[9][12] = A[12][9];
	AT[9][13] = A[13][9];
	AT[9][14] = A[14][9];
	AT[9][15] = A[15][9];
	AT[9][16] = A[16][9];
	AT[9][17] = A[17][9];
	AT[10][0] = A[0][10];
	AT[10][1] = A[1][10];
	AT[10][2] = A[2][10];
	AT[10][3] = A[3][10];
	AT[10][4] = A[4][10];
	AT[10][5] = A[5][10];
	AT[10][6] = A[6][10];
	AT[10][7] = A[7][10];
	AT[10][8] = A[8][10];
	AT[10][9] = A[9][10];
	AT[10][10] = A[10][10];
	AT[10][11] = A[11][10];
	AT[10][12] = A[12][10];
	AT[10][13] = A[13][10];
	AT[10][14] = A[14][10];
	AT[10][15] = A[15][10];
	AT[10][16] = A[16][10];
	AT[10][17] = A[17][10];
	AT[11][0] = A[0][11];
	AT[11][1] = A[1][11];
	AT[11][2] = A[2][11];
	AT[11][3] = A[3][11];
	AT[11][4] = A[4][11];
	AT[11][5] = A[5][11];
	AT[11][6] = A[6][11];
	AT[11][7] = A[7][11];
	AT[11][8] = A[8][11];
	AT[11][9] = A[9][11];
	AT[11][10] = A[10][11];
	AT[11][11] = A[11][11];
	AT[11][12] = A[12][11];
	AT[11][13] = A[13][11];
	AT[11][14] = A[14][11];
	AT[11][15] = A[15][11];
	AT[11][16] = A[16][11];
	AT[11][17] = A[17][11];
	AT[12][0] = A[0][12];
	AT[12][1] = A[1][12];
	AT[12][2] = A[2][12];
	AT[12][3] = A[3][12];
	AT[12][4] = A[4][12];
	AT[12][5] = A[5][12];
	AT[12][6] = A[6][12];
	AT[12][7] = A[7][12];
	AT[12][8] = A[8][12];
	AT[12][9] = A[9][12];
	AT[12][10] = A[10][12];
	AT[12][11] = A[11][12];
	AT[12][12] = A[12][12];
	AT[12][13] = A[13][12];
	AT[12][14] = A[14][12];
	AT[12][15] = A[15][12];
	AT[12][16] = A[16][12];
	AT[12][17] = A[17][12];
	AT[13][0] = A[0][13];
	AT[13][1] = A[1][13];
	AT[13][2] = A[2][13];
	AT[13][3] = A[3][13];
	AT[13][4] = A[4][13];
	AT[13][5] = A[5][13];
	AT[13][6] = A[6][13];
	AT[13][7] = A[7][13];
	AT[13][8] = A[8][13];
	AT[13][9] = A[9][13];
	AT[13][10] = A[10][13];
	AT[13][11] = A[11][13];
	AT[13][12] = A[12][13];
	AT[13][13] = A[13][13];
	AT[13][14] = A[14][13];
	AT[13][15] = A[15][13];
	AT[13][16] = A[16][13];
	AT[13][17] = A[17][13];
	AT[14][0] = A[0][14];
	AT[14][1] = A[1][14];
	AT[14][2] = A[2][14];
	AT[14][3] = A[3][14];
	AT[14][4] = A[4][14];
	AT[14][5] = A[5][14];
	AT[14][6] = A[6][14];
	AT[14][7] = A[7][14];
	AT[14][8] = A[8][14];
	AT[14][9] = A[9][14];
	AT[14][10] = A[10][14];
	AT[14][11] = A[11][14];
	AT[14][12] = A[12][14];
	AT[14][13] = A[13][14];
	AT[14][14] = A[14][14];
	AT[14][15] = A[15][14];
	AT[14][16] = A[16][14];
	AT[14][17] = A[17][14];
	AT[15][0] = A[0][15];
	AT[15][1] = A[1][15];
	AT[15][2] = A[2][15];
	AT[15][3] = A[3][15];
	AT[15][4] = A[4][15];
	AT[15][5] = A[5][15];
	AT[15][6] = A[6][15];
	AT[15][7] = A[7][15];
	AT[15][8] = A[8][15];
	AT[15][9] = A[9][15];
	AT[15][10] = A[10][15];
	AT[15][11] = A[11][15];
	AT[15][12] = A[12][15];
	AT[15][13] = A[13][15];
	AT[15][14] = A[14][15];
	AT[15][15] = A[15][15];
	AT[15][16] = A[16][15];
	AT[15][17] = A[17][15];
	AT[16][0] = A[0][16];
	AT[16][1] = A[1][16];
	AT[16][2] = A[2][16];
	AT[16][3] = A[3][16];
	AT[16][4] = A[4][16];
	AT[16][5] = A[5][16];
	AT[16][6] = A[6][16];
	AT[16][7] = A[7][16];
	AT[16][8] = A[8][16];
	AT[16][9] = A[9][16];
	AT[16][10] = A[10][16];
	AT[16][11] = A[11][16];
	AT[16][12] = A[12][16];
	AT[16][13] = A[13][16];
	AT[16][14] = A[14][16];
	AT[16][15] = A[15][16];
	AT[16][16] = A[16][16];
	AT[16][17] = A[17][16];
	AT[17][0] = A[0][17];
	AT[17][1] = A[1][17];
	AT[17][2] = A[2][17];
	AT[17][3] = A[3][17];
	AT[17][4] = A[4][17];
	AT[17][5] = A[5][17];
	AT[17][6] = A[6][17];
	AT[17][7] = A[7][17];
	AT[17][8] = A[8][17];
	AT[17][9] = A[9][17];
	AT[17][10] = A[10][17];
	AT[17][11] = A[11][17];
	AT[17][12] = A[12][17];
	AT[17][13] = A[13][17];
	AT[17][14] = A[14][17];
	AT[17][15] = A[15][17];
	AT[17][16] = A[16][17];
	AT[17][17] = A[17][17];
}
