float ps(float *p, float *q, int m)
{
	float s;
	if (m == 0) { s = 0; }
	else s = ps(p, q, m - 1) + p[m - 1] * q[m - 1];
	return s;
}