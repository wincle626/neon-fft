/*
 *  Copyright 2012 ARM Limited
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *    * Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *    * Neither the name of ARM Limited nor the
 *      names of its contributors may be used to endorse or promote products
 *      derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY ARM LIMITED AND CONTRIBUTORS "AS IS" AND
 *  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL ARM LIMITED BE LIABLE FOR ANY
 *  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 *  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */



/*
* @brief  Twiddle factors Table
*/
/** Pseudo code for Twiddle factor Tables Generation:

for i=1 to N
    cfft_twiddle_coef(2*i) = cos((i-1) * 2*PI/(float)N))
    cfft_twiddle_coef(2*i + 1) = sin((i-1) * 2*PI/(float)N))
end

where N = 1024    and PI = 3.14159265358979

N is the maximum FFT Size supported and
Cos and Sin values are interleaved fashion
*/

/*Twiddles below are generated for each FFT-DIT stage seperately*/

static float cfft_twiddle_coef[2040]=
{
    1.000000,0.000000,0.923880,0.382683,0.707107,0.707107,0.382683,0.923880,
    1.000000,0.000000,0.707107,0.707107,0.000000,1.000000,-0.707107,0.707107,
    1.000000,0.000000,0.382683,0.923880,-0.707107,0.707107,-0.923880,-0.382683,

    1.000000,0.000000,0.995185,0.098017,0.980785,0.195090,0.956940,0.290285,0.923880
    ,0.382683,0.881921,0.471397,0.831470,0.555570,0.773010,0.634393,0.707107,
    0.707107,0.634393,0.773010,0.555570,0.831470,0.471397,0.881921,0.382683,0.923880,
    0.290285,0.956940,0.195090,0.980785,0.098017,0.995185,

    1.000000,0.000000,0.980785,0.195090,0.923880,0.382683,0.831470,0.555570,0.707107
    ,0.707107,0.555570,0.831470,0.382683,0.923880,0.195090,0.980785,0.000000,
    1.000000,-0.195090,0.980785,-0.382683,0.923880,-0.555570,0.831470,-0.707107,0.707107,
    -0.831470,0.555570,-0.923880,0.382683,-0.980785,0.195090,

    1.000000,0.000000,0.956940,0.290285,0.831470,0.555570,0.634393,0.773010,0.382683
    ,0.923880,0.098017,0.995185,-0.195090,0.980785,-0.471397,0.881921,-0.707107,
    0.707107,-0.881921,0.471397,-0.980785,0.195090,-0.995185,-0.098017,-0.923880,
    -0.382683,-0.773010,-0.634393,-0.555570,-0.831470,-0.290285,-0.956940,

    1.000000,0.000000,0.999699,0.024541,0.998795,0.049068,0.997290,0.073565,0.995185
    ,0.098017,0.992480,0.122411,0.989177,0.146730,0.985278,0.170962,0.980785,
    0.195090,0.975702,0.219101,0.970031,0.242980,0.963776,0.266713,0.956940,0.290285,
    0.949528,0.313682,0.941544,0.336890,0.932993,0.359895,0.923880,0.382683,0.914210,
    0.405241,0.903989,0.427555,0.893224,0.449611,0.881921,0.471397,0.870087,0.492898,
    0.857729,0.514103,0.844854,0.534998,0.831470,0.555570,0.817585,0.575808,0.803208,
    0.595699,0.788346,0.615232,0.773010,0.634393,0.757209,0.653173,0.740951,0.671559,
    0.724247,0.689541,0.707107,0.707107,0.689541,0.724247,0.671559,0.740951,0.653173,
    0.757209,0.634393,0.773010,0.615232,0.788346,0.595699,0.803208,0.575808,0.817585,
    0.555570,0.831470,0.534998,0.844854,0.514103,0.857729,0.492898,0.870087,0.471397
    ,0.881921,0.449611,0.893224,0.427555,0.903989,0.405241,0.914210,0.382683,
    0.923880,0.359895,0.932993,0.336890,0.941544,0.313682,0.949528,0.290285,0.956940,
    0.266713,0.963776,0.242980,0.970031,0.219101,0.975702,0.195090,0.980785,0.170962,
    0.985278,0.146730,0.989177,0.122411,0.992480,0.098017,0.995185,0.073565,0.997290,
    0.049068,0.998795,0.024541,0.999699,

    1.000000,0.000000,0.998795,0.049068,0.995185,0.098017,0.989177,0.146730,0.980785
    ,0.195090,0.970031,0.242980,0.956940,0.290285,0.941544,0.336890,0.923880,
    0.382683,0.903989,0.427555,0.881921,0.471397,0.857729,0.514103,0.831470,0.555570,
    0.803208,0.595699,0.773010,0.634393,0.740951,0.671559,0.707107,0.707107,0.671559,
    0.740951,0.634393,0.773010,0.595699,0.803208,0.555570,0.831470,0.514103,0.857729,
    0.471397,0.881921,0.427555,0.903989,0.382683,0.923880,0.336890,0.941544,0.290285,
    0.956940,0.242980,0.970031,0.195090,0.980785,0.146730,0.989177,0.098017,0.995185,
    0.049068,0.998795,0.000000,1.000000,-0.049068,0.998795,-0.098017,0.995185,
    -0.146730,0.989177,-0.195090,0.980785,-0.242980,0.970031,-0.290285,0.956940,-0.336890,
    0.941544,-0.382683,0.923880,-0.427555,0.903989,-0.471397,0.881921,-0.514103,
    0.857729,-0.555570,0.831470,-0.595699,0.803208,-0.634393,0.773010,-0.671559,0.740951,
    -0.707107,0.707107,-0.740951,0.671559,-0.773010,0.634393,-0.803208,0.595699,
    -0.831470,0.555570,-0.857729,0.514103,-0.881921,0.471397,-0.903989,0.427555,
    -0.923880,0.382683,-0.941544,0.336890,-0.956940,0.290285,-0.970031,0.242980,-0.980785,
    0.195090,-0.989177,0.146730,-0.995185,0.098017,-0.998795,0.049068,

    1.000000,0.000000,0.997290,0.073565,0.989177,0.146730,0.975702,0.219101,0.956940
    ,0.290285,0.932993,0.359895,0.903989,0.427555,0.870087,0.492898,0.831470,
    0.555570,0.788346,0.615232,0.740951,0.671559,0.689541,0.724247,0.634393,0.773010,
    0.575808,0.817585,0.514103,0.857729,0.449611,0.893224,0.382683,0.923880,0.313682,
    0.949528,0.242980,0.970031,0.170962,0.985278,0.098017,0.995185,0.024541,0.999699,
    -0.049068,0.998795,-0.122411,0.992480,-0.195090,0.980785,-0.266713,0.963776,
    -0.336890,0.941544,-0.405241,0.914210,-0.471397,0.881921,-0.534998,0.844854,-0.595699,
    0.803208,-0.653173,0.757209,-0.707107,0.707107,-0.757209,0.653173,-0.803208,
    0.595699,-0.844854,0.534998,-0.881921,0.471397,-0.914210,0.405241,-0.941544,0.336890,
    -0.963776,0.266713,-0.980785,0.195090,-0.992480,0.122411,-0.998795,0.049068,
    -0.999699,-0.024541,-0.995185,-0.098017,-0.985278,-0.170962,-0.970031,-0.242980,
    -0.949528,-0.313682,-0.923880,-0.382683,-0.893224,-0.449611,-0.857729,-0.514103,
    -0.817585,-0.575808,-0.773010,-0.634393,-0.724247,-0.689541,-0.671559,-0.740951,
    -0.615232,-0.788346,-0.555570,-0.831470,-0.492898,-0.870087,-0.427555,-0.903989,
    -0.359895,-0.932993,-0.290285,-0.956940,-0.219101,-0.975702,-0.146730,-0.989177,
    -0.073565,-0.997290,


    1.000000,0.000000,0.999981,0.006136,0.999925,0.012272,0.999831,0.018407,0.999699
    ,0.024541,0.999529,0.030675,0.999322,0.036807,0.999078,0.042938,0.998795,
    0.049068,0.998476,0.055195,0.998118,0.061321,0.997723,0.067444,0.997290,0.073565,
    0.996820,0.079682,0.996313,0.085797,0.995767,0.091909,0.995185,0.098017,0.994565,
    0.104122,0.993907,0.110222,0.993212,0.116319,0.992480,0.122411,0.991710,0.128498,
    0.990903,0.134581,0.990058,0.140658,0.989177,0.146730,0.988258,0.152797,0.987301,
    0.158858,0.986308,0.164913,0.985278,0.170962,0.984210,0.177004,0.983105,0.183040,
    0.981964,0.189069,0.980785,0.195090,0.979570,0.201105,0.978317,0.207111,0.977028,
    0.213110,0.975702,0.219101,0.974339,0.225084,0.972940,0.231058,0.971504,0.237024,
    0.970031,0.242980,0.968522,0.248928,0.966976,0.254866,0.965394,0.260794,0.963776
    ,0.266713,0.962121,0.272621,0.960431,0.278520,0.958703,0.284408,0.956940,
    0.290285,0.955141,0.296151,0.953306,0.302006,0.951435,0.307850,0.949528,0.313682,
    0.947586,0.319502,0.945607,0.325310,0.943593,0.331106,0.941544,0.336890,0.939459,
    0.342661,0.937339,0.348419,0.935184,0.354164,0.932993,0.359895,0.930767,0.365613,
    0.928506,0.371317,0.926210,0.377007,0.923880,0.382683,0.921514,0.388345,0.919114,
    0.393992,0.916679,0.399624,0.914210,0.405241,0.911706,0.410843,0.909168,0.416430,
    0.906596,0.422000,0.903989,0.427555,0.901349,0.433094,0.898674,0.438616,0.895966,
    0.444122,0.893224,0.449611,0.890449,0.455084,0.887640,0.460539,0.884797,0.465977,
    0.881921,0.471397,0.879012,0.476799,0.876070,0.482184,0.873095,0.487550,0.870087
    ,0.492898,0.867046,0.498228,0.863973,0.503538,0.860867,0.508830,0.857729,
    0.514103,0.854558,0.519356,0.851355,0.524590,0.848120,0.529804,0.844854,0.534998,
    0.841555,0.540171,0.838225,0.545325,0.834863,0.550458,0.831470,0.555570,0.828045,
    0.560662,0.824589,0.565732,0.821102,0.570781,0.817585,0.575808,0.814036,0.580814,
    0.810457,0.585798,0.806848,0.590760,0.803208,0.595699,0.799537,0.600616,0.795837,
    0.605511,0.792107,0.610383,0.788346,0.615232,0.784557,0.620057,0.780737,0.624860,
    0.776888,0.629638,0.773010,0.634393,0.769103,0.639124,0.765167,0.643832,0.761202,
    0.648514,0.757209,0.653173,0.753187,0.657807,0.749136,0.662416,0.745058,0.667000,
    0.740951,0.671559,0.736817,0.676093,0.732654,0.680601,0.728464,0.685084,0.724247
    ,0.689541,0.720003,0.693971,0.715731,0.698376,0.711432,0.702755,0.707107,
    0.707107,0.702755,0.711432,0.698376,0.715731,0.693971,0.720003,0.689541,0.724247,
    0.685084,0.728464,0.680601,0.732654,0.676093,0.736817,0.671559,0.740951,0.667000,
    0.745058,0.662416,0.749136,0.657807,0.753187,0.653173,0.757209,0.648514,0.761202,
    0.643832,0.765167,0.639124,0.769103,0.634393,0.773010,0.629638,0.776888,0.624860,
    0.780737,0.620057,0.784557,0.615232,0.788346,0.610383,0.792107,0.605511,0.795837,
    0.600616,0.799537,0.595699,0.803208,0.590760,0.806848,0.585798,0.810457,0.580814,
    0.814036,0.575808,0.817585,0.570781,0.821102,0.565732,0.824589,0.560662,0.828045,
    0.555570,0.831470,0.550458,0.834863,0.545325,0.838225,0.540171,0.841555,0.534998
    ,0.844854,0.529804,0.848120,0.524590,0.851355,0.519356,0.854558,0.514103,
    0.857729,0.508830,0.860867,0.503538,0.863973,0.498228,0.867046,0.492898,0.870087,
    0.487550,0.873095,0.482184,0.876070,0.476799,0.879012,0.471397,0.881921,0.465977,
    0.884797,0.460539,0.887640,0.455084,0.890449,0.449611,0.893224,0.444122,0.895966,
    0.438616,0.898674,0.433094,0.901349,0.427555,0.903989,0.422000,0.906596,0.416430,
    0.909168,0.410843,0.911706,0.405241,0.914210,0.399624,0.916679,0.393992,0.919114,
    0.388345,0.921514,0.382683,0.923880,0.377007,0.926210,0.371317,0.928506,0.365613,
    0.930767,0.359895,0.932993,0.354164,0.935184,0.348419,0.937339,0.342661,0.939459,
    0.336890,0.941544,0.331106,0.943593,0.325310,0.945607,0.319502,0.947586,0.313682
    ,0.949528,0.307850,0.951435,0.302006,0.953306,0.296151,0.955141,0.290285,
    0.956940,0.284408,0.958703,0.278520,0.960431,0.272621,0.962121,0.266713,0.963776,
    0.260794,0.965394,0.254866,0.966976,0.248928,0.968522,0.242980,0.970031,0.237024,
    0.971504,0.231058,0.972940,0.225084,0.974339,0.219101,0.975702,0.213110,0.977028,
    0.207111,0.978317,0.201105,0.979570,0.195090,0.980785,0.189069,0.981964,0.183040,
    0.983105,0.177004,0.984210,0.170962,0.985278,0.164913,0.986308,0.158858,0.987301,
    0.152797,0.988258,0.146730,0.989177,0.140658,0.990058,0.134581,0.990903,0.128498,
    0.991710,0.122411,0.992480,0.116319,0.993212,0.110222,0.993907,0.104122,0.994565,
    0.098017,0.995185,0.091909,0.995767,0.085797,0.996313,0.079682,0.996820,0.073565
    ,0.997290,0.067444,0.997723,0.061321,0.998118,0.055195,0.998476,0.049068,
    0.998795,0.042938,0.999078,0.036807,0.999322,0.030675,0.999529,0.024541,0.999699,
    0.018407,0.999831,0.012272,0.999925,0.006136,0.999981,


    1.000000,0.000000,0.999925,0.012272,0.999699,0.024541,0.999322,0.036807,0.998795
    ,0.049068,0.998118,0.061321,0.997290,0.073565,0.996313,0.085797,0.995185,
    0.098017,0.993907,0.110222,0.992480,0.122411,0.990903,0.134581,0.989177,0.146730,
    0.987301,0.158858,0.985278,0.170962,0.983105,0.183040,0.980785,0.195090,0.978317,
    0.207111,0.975702,0.219101,0.972940,0.231058,0.970031,0.242980,0.966976,0.254866,
    0.963776,0.266713,0.960431,0.278520,0.956940,0.290285,0.953306,0.302006,0.949528,
    0.313682,0.945607,0.325310,0.941544,0.336890,0.937339,0.348419,0.932993,0.359895,
    0.928506,0.371317,0.923880,0.382683,0.919114,0.393992,0.914210,0.405241,0.909168,
    0.416430,0.903989,0.427555,0.898674,0.438616,0.893224,0.449611,0.887640,0.460539,
    0.881921,0.471397,0.876070,0.482184,0.870087,0.492898,0.863973,0.503538,0.857729
    ,0.514103,0.851355,0.524590,0.844854,0.534998,0.838225,0.545325,0.831470,
    0.555570,0.824589,0.565732,0.817585,0.575808,0.810457,0.585798,0.803208,0.595699,
    0.795837,0.605511,0.788346,0.615232,0.780737,0.624860,0.773010,0.634393,0.765167,
    0.643832,0.757209,0.653173,0.749136,0.662416,0.740951,0.671559,0.732654,0.680601,
    0.724247,0.689541,0.715731,0.698376,0.707107,0.707107,0.698376,0.715731,0.689541,
    0.724247,0.680601,0.732654,0.671559,0.740951,0.662416,0.749136,0.653173,0.757209,
    0.643832,0.765167,0.634393,0.773010,0.624860,0.780737,0.615232,0.788346,0.605511,
    0.795837,0.595699,0.803208,0.585798,0.810457,0.575808,0.817585,0.565732,0.824589,
    0.555570,0.831470,0.545325,0.838225,0.534998,0.844854,0.524590,0.851355,0.514103
    ,0.857729,0.503538,0.863973,0.492898,0.870087,0.482184,0.876070,0.471397,
    0.881921,0.460539,0.887640,0.449611,0.893224,0.438616,0.898674,0.427555,0.903989,
    0.416430,0.909168,0.405241,0.914210,0.393992,0.919114,0.382683,0.923880,0.371317,
    0.928506,0.359895,0.932993,0.348419,0.937339,0.336890,0.941544,0.325310,0.945607,
    0.313682,0.949528,0.302006,0.953306,0.290285,0.956940,0.278520,0.960431,0.266713,
    0.963776,0.254866,0.966976,0.242980,0.970031,0.231058,0.972940,0.219101,0.975702,
    0.207111,0.978317,0.195090,0.980785,0.183040,0.983105,0.170962,0.985278,0.158858,
    0.987301,0.146730,0.989177,0.134581,0.990903,0.122411,0.992480,0.110222,0.993907,
    0.098017,0.995185,0.085797,0.996313,0.073565,0.997290,0.061321,0.998118,0.049068
    ,0.998795,0.036807,0.999322,0.024541,0.999699,0.012272,0.999925,0.000000,
    1.000000,-0.012272,0.999925,-0.024541,0.999699,-0.036807,0.999322,-0.049068,0.998795,
    -0.061321,0.998118,-0.073565,0.997290,-0.085797,0.996313,-0.098017,0.995185,
    -0.110222,0.993907,-0.122411,0.992480,-0.134581,0.990903,-0.146730,0.989177,-0.158858,
    0.987301,-0.170962,0.985278,-0.183040,0.983105,-0.195090,0.980785,-0.207111,
    0.978317,-0.219101,0.975702,-0.231058,0.972940,-0.242980,0.970031,-0.254866,
    0.966976,-0.266713,0.963776,-0.278520,0.960431,-0.290285,0.956940,-0.302006,0.953306,
    -0.313682,0.949528,-0.325310,0.945607,-0.336890,0.941544,-0.348419,0.937339,
    -0.359895,0.932993,-0.371317,0.928506,-0.382683,0.923880,-0.393992,0.919114,-0.405241,
    0.914210,-0.416430,0.909168,-0.427555,0.903989,-0.438616,0.898674,-0.449611,
    0.893224,-0.460539,0.887640,-0.471397,0.881921,-0.482184,0.876070,-0.492898,0.870087,
    -0.503538,0.863973,-0.514103,0.857729,-0.524590,0.851355,-0.534998,0.844854,
    -0.545325,0.838225,-0.555570,0.831470,-0.565732,0.824589,-0.575808,0.817585,
    -0.585798,0.810457,-0.595699,0.803208,-0.605511,0.795837,-0.615232,0.788346,-0.624860,
    0.780737,-0.634393,0.773010,-0.643832,0.765167,-0.653173,0.757209,-0.662416,
    0.749136,-0.671559,0.740951,-0.680601,0.732654,-0.689541,0.724247,-0.698376,0.715731,
    -0.707107,0.707107,-0.715731,0.698376,-0.724247,0.689541,-0.732654,0.680601,
    -0.740951,0.671559,-0.749136,0.662416,-0.757209,0.653173,-0.765167,0.643832,
    -0.773010,0.634393,-0.780737,0.624860,-0.788346,0.615232,-0.795837,0.605511,-0.803208,
    0.595699,-0.810457,0.585798,-0.817585,0.575808,-0.824589,0.565732,-0.831470,
    0.555570,-0.838225,0.545325,-0.844854,0.534998,-0.851355,0.524590,-0.857729,0.514103,
    -0.863973,0.503538,-0.870087,0.492898,-0.876070,0.482184,-0.881921,0.471397,
    -0.887640,0.460539,-0.893224,0.449611,-0.898674,0.438616,-0.903989,0.427555,-0.909168,
    0.416430,-0.914210,0.405241,-0.919114,0.393992,-0.923880,0.382683,-0.928506,
    0.371317,-0.932993,0.359895,-0.937339,0.348419,-0.941544,0.336890,-0.945607,
    0.325310,-0.949528,0.313682,-0.953306,0.302006,-0.956940,0.290285,-0.960431,0.278520,
    -0.963776,0.266713,-0.966976,0.254866,-0.970031,0.242980,-0.972940,0.231058,
    -0.975702,0.219101,-0.978317,0.207111,-0.980785,0.195090,-0.983105,0.183040,-0.985278,
    0.170962,-0.987301,0.158858,-0.989177,0.146730,-0.990903,0.134581,-0.992480,
    0.122411,-0.993907,0.110222,-0.995185,0.098017,-0.996313,0.085797,-0.997290,0.073565,
    -0.998118,0.061321,-0.998795,0.049068,-0.999322,0.036807,-0.999699,0.024541,
    -0.999925,0.012272,



    1.000000,0.000000,0.999831,0.018407,0.999322,0.036807,0.998476,0.055195,0.997290
    ,0.073565,0.995767,0.091909,0.993907,0.110222,0.991710,0.128498,0.989177,
    0.146730,0.986308,0.164913,0.983105,0.183040,0.979570,0.201105,0.975702,0.219101,
    0.971504,0.237024,0.966976,0.254866,0.962121,0.272621,0.956940,0.290285,0.951435,
    0.307850,0.945607,0.325310,0.939459,0.342661,0.932993,0.359895,0.926210,0.377007,
    0.919114,0.393992,0.911706,0.410843,0.903989,0.427555,0.895966,0.444122,0.887640,
    0.460539,0.879012,0.476799,0.870087,0.492898,0.860867,0.508830,0.851355,0.524590,
    0.841555,0.540171,0.831470,0.555570,0.821102,0.570781,0.810457,0.585798,0.799537,
    0.600616,0.788346,0.615232,0.776888,0.629638,0.765167,0.643832,0.753187,0.657807,
    0.740951,0.671559,0.728464,0.685084,0.715731,0.698376,0.702755,0.711432,0.689541
    ,0.724247,0.676093,0.736817,0.662416,0.749136,0.648514,0.761202,0.634393,
    0.773010,0.620057,0.784557,0.605511,0.795837,0.590760,0.806848,0.575808,0.817585,
    0.560662,0.828045,0.545325,0.838225,0.529804,0.848120,0.514103,0.857729,0.498228,
    0.867046,0.482184,0.876070,0.465977,0.884797,0.449611,0.893224,0.433094,0.901349,
    0.416430,0.909168,0.399624,0.916679,0.382683,0.923880,0.365613,0.930767,0.348419,
    0.937339,0.331106,0.943593,0.313682,0.949528,0.296151,0.955141,0.278520,0.960431,
    0.260794,0.965394,0.242980,0.970031,0.225084,0.974339,0.207111,0.978317,0.189069,
    0.981964,0.170962,0.985278,0.152797,0.988258,0.134581,0.990903,0.116319,0.993212,
    0.098017,0.995185,0.079682,0.996820,0.061321,0.998118,0.042938,0.999078,0.024541
    ,0.999699,0.006136,0.999981,-0.012272,0.999925,-0.030675,0.999529,-0.049068,
    0.998795,-0.067444,0.997723,-0.085797,0.996313,-0.104122,0.994565,-0.122411,
    0.992480,-0.140658,0.990058,-0.158858,0.987301,-0.177004,0.984210,-0.195090,0.980785,
    -0.213110,0.977028,-0.231058,0.972940,-0.248928,0.968522,-0.266713,0.963776,
    -0.284408,0.958703,-0.302006,0.953306,-0.319502,0.947586,-0.336890,0.941544,-0.354164,
    0.935184,-0.371317,0.928506,-0.388345,0.921514,-0.405241,0.914210,-0.422000,
    0.906596,-0.438616,0.898674,-0.455084,0.890449,-0.471397,0.881921,-0.487550,0.873095,
    -0.503538,0.863973,-0.519356,0.854558,-0.534998,0.844854,-0.550458,0.834863,
    -0.565732,0.824589,-0.580814,0.814036,-0.595699,0.803208,-0.610383,0.792107,
    -0.624860,0.780737,-0.639124,0.769103,-0.653173,0.757209,-0.667000,0.745058,-0.680601,
    0.732654,-0.693971,0.720003,-0.707107,0.707107,-0.720003,0.693971,-0.732654,
    0.680601,-0.745058,0.667000,-0.757209,0.653173,-0.769103,0.639124,-0.780737,0.624860,
    -0.792107,0.610383,-0.803208,0.595699,-0.814036,0.580814,-0.824589,0.565732,
    -0.834863,0.550458,-0.844854,0.534998,-0.854558,0.519356,-0.863973,0.503538,-0.873095
    ,0.487550,-0.881921,0.471397,-0.890449,0.455084,-0.898674,0.438616,-0.906596,
    0.422000,-0.914210,0.405241,-0.921514,0.388345,-0.928506,0.371317,-0.935184,
    0.354164,-0.941544,0.336890,-0.947586,0.319502,-0.953306,0.302006,-0.958703,0.284408,
    -0.963776,0.266713,-0.968522,0.248928,-0.972940,0.231058,-0.977028,0.213110,
    -0.980785,0.195090,-0.984210,0.177004,-0.987301,0.158858,-0.990058,0.140658,-0.992480,
    0.122411,-0.994565,0.104122,-0.996313,0.085797,-0.997723,0.067444,-0.998795,
    0.049068,-0.999529,0.030675,-0.999925,0.012272,-0.999981,-0.006136,-0.999699,
    -0.024541,-0.999078,-0.042938,-0.998118,-0.061321,-0.996820,-0.079682,-0.995185,
    -0.098017,-0.993212,-0.116319,-0.990903,-0.134581,-0.988258,-0.152797,-0.985278,
    -0.170962,-0.981964,-0.189069,-0.978317,-0.207111,-0.974339,-0.225084,-0.970031,
    -0.242980,-0.965394,-0.260794,-0.960431,-0.278520,-0.955141,-0.296151,-0.949528,
    -0.313682,-0.943593,-0.331106,-0.937339,-0.348419,-0.930767,-0.365613,-0.923880,
    -0.382683,-0.916679,-0.399624,-0.909168,-0.416430,-0.901349,-0.433094,-0.893224,
    -0.449611,-0.884797,-0.465977,-0.876070,-0.482184,-0.867046,-0.498228,-0.857729,
    -0.514103,-0.848120,-0.529804,-0.838225,-0.545325,-0.828045,-0.560662,-0.817585,
    -0.575808,-0.806848,-0.590760,-0.795837,-0.605511,-0.784557,-0.620057,-0.773010,
    -0.634393,-0.761202,-0.648514,-0.749136,-0.662416,-0.736817,-0.676093,-0.724247,
    -0.689541,-0.711432,-0.702755,-0.698376,-0.715731,-0.685084,-0.728464,-0.671559,
    -0.740951,-0.657807,-0.753187,-0.643832,-0.765167,-0.629638,-0.776888,-0.615232,
    -0.788346,-0.600616,-0.799537,-0.585798,-0.810457,-0.570781,-0.821102,-0.555570,
    -0.831470,-0.540171,-0.841555,-0.524590,-0.851355,-0.508830,-0.860867,-0.492898,
    -0.870087,-0.476799,-0.879012,-0.460539,-0.887640,-0.444122,-0.895966,-0.427555,
    -0.903989,-0.410843,-0.911706,-0.393992,-0.919114,-0.377007,-0.926210,-0.359895,
    -0.932993,-0.342661,-0.939459,-0.325310,-0.945607,-0.307850,-0.951435,-0.290285,
    -0.956940,-0.272621,-0.962121,-0.254866,-0.966976,-0.237024,-0.971504,-0.219101,
    -0.975702,-0.201105,-0.979570,-0.183040,-0.983105,-0.164913,-0.986308,-0.146730,
    -0.989177,-0.128498,-0.991710,-0.110222,-0.993907,-0.091909,-0.995767,-0.073565,
    -0.997290,-0.055195,-0.998476,-0.036807,-0.999322,-0.018407,-0.999831

};
typedef struct
{
    int fft_len;                           /**< Length of the FFT. */
    int ifft_flag;                          /**< Flag for selection of CFFT/ICFFT */
    int bit_reverse_flag;                   /**< Flag for selection of bitreversal or not */
    float *p_twiddle;                       /**< Points to the twiddle factors array. The array is of length 2 * MaxFFTSize. */
    int *p_bit_rev_table;                  /**< Points to the bit reversal array. The array is of size    MaxFFTSize/4 */
    int twid_coef_modifier;                /**< Modifier to support different FFT sizes with same twiddle table */
    int bit_rev_factor;                    /**< Modifier to support different FFT sizes with same bit reversal table */
    float one_by_fft_len;                   /**< 1/(Length of the FFT). */
} ne10_cfft_radix4_instance_f32_t;

/*
* @brief  Initialization function for the floating point CFFT/CIFFT function.
*
* @param[in,out] *S points to an instance of the floating point CFFT/CIFFT function structure.
* @param[in] fftLen  length of the CFFT/CIFFT .
* @param[in] ifft_flag Flag for the selection of CFFT or CIFFT
* @return The function returns NE10_OK if initialization was successful or NE10_ERR if
* <code>fftLen</code> is not a supported value.
*
* The function inialises the Twiddle factors table and bit reverse table
*/

void  ne10_cfft_radix4_init_float(
    ne10_cfft_radix4_instance_f32_t * S,
    int fftLen,
    int ifftFlag)
{
    int i,j;
    /*  Initialise the default arm status */
    //ne10_result_t status = NE10_OK;

    /*  Initialise the FFT length */
    S->fft_len = fftLen;

    /*  Initialise the twiddle coef modifier value */
    S->twid_coef_modifier = 1u;

    /*  Initialise the Flag for selection of CFFT or CIFFT */
    S->ifft_flag = ifftFlag;

    /*  Initializations of structure parameters depending on the FFT length */
    switch (S->fft_len)
    {

    case 1024u:
        /*  Initializations of structure parameters for 1024 point FFT */

        /*  Initialise the Twiddle coefficient pointer */
        S->p_twiddle = (float *) cfft_twiddle_coef;

        /*  Initialise the bit reversal table modifier */
        S->bit_rev_factor = 1u;
        /*  Initialise the 1/N Value */
        S->one_by_fft_len = 0.0009765625f;
        break;


    case 256u:
        /*  Initializations of structure parameters for 256 point FFT */

        /*  Initialise the Twiddle coefficient pointer */
        S->p_twiddle = (float *) cfft_twiddle_coef;
        S->bit_rev_factor = 4u;
        S->one_by_fft_len = 0.00390625f;
        break;

    case 64u:
        /*  Initializations of structure parameters for 64 point FFT */
        /*  Initialise the Twiddle coefficient pointer */
        S->p_twiddle = (float *) cfft_twiddle_coef;
        S->bit_rev_factor = 16u;
        S->one_by_fft_len = 0.015625f;
        break;

    case 16u:
        /*  Initializations of structure parameters for 16 point FFT */

        /*  Initialise the Twiddle coefficient pointer */
        S->p_twiddle = (float *) cfft_twiddle_coef;

        S->bit_rev_factor = 64u;
        S->one_by_fft_len = 0.0625f;
        break;


    default:
        /*  Reporting argument error if fftSize is not valid value */
       // status = NE10_ERR;
        break;
    }
    return ;
}

