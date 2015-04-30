#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QRadioButton a;

    st = new stimer;
    cb = new QCheckBox**[7];
    te = new QTimeEdit**[7];
    rb = new QRadioButton***[7];
    for(int i = 0; i < 7; i++){
        cb[i] = new QCheckBox*[8];
        te[i] = new QTimeEdit*[8];
        rb[i] = new QRadioButton**[8];
        for(int j = 0; j < 8; j++)
            rb[i][j] = new QRadioButton*[8];
    }
    cb[0][0] = ui->checkBox_1_1;
    cb[0][1] = ui->checkBox_1_2;
    cb[0][2] = ui->checkBox_1_3;
    cb[0][3] = ui->checkBox_1_4;
    cb[0][4] = ui->checkBox_1_5;
    cb[0][5] = ui->checkBox_1_6;
    cb[0][6] = ui->checkBox_1_7;
    cb[0][7] = ui->checkBox_1_8;
    cb[1][0] = ui->checkBox_2_1;
    cb[1][1] = ui->checkBox_2_2;
    cb[1][2] = ui->checkBox_2_3;
    cb[1][3] = ui->checkBox_2_4;
    cb[1][4] = ui->checkBox_2_5;
    cb[1][5] = ui->checkBox_2_6;
    cb[1][6] = ui->checkBox_2_7;
    cb[1][7] = ui->checkBox_2_8;
    cb[2][0] = ui->checkBox_3_1;
    cb[2][1] = ui->checkBox_3_2;
    cb[2][2] = ui->checkBox_3_3;
    cb[2][3] = ui->checkBox_3_4;
    cb[2][4] = ui->checkBox_3_5;
    cb[2][5] = ui->checkBox_3_6;
    cb[2][6] = ui->checkBox_3_7;
    cb[2][7] = ui->checkBox_3_8;
    cb[3][0] = ui->checkBox_4_1;
    cb[3][1] = ui->checkBox_4_2;
    cb[3][2] = ui->checkBox_4_3;
    cb[3][3] = ui->checkBox_4_4;
    cb[3][4] = ui->checkBox_4_5;
    cb[3][5] = ui->checkBox_4_6;
    cb[3][6] = ui->checkBox_4_7;
    cb[3][7] = ui->checkBox_4_8;
    cb[4][0] = ui->checkBox_5_1;
    cb[4][1] = ui->checkBox_5_2;
    cb[4][2] = ui->checkBox_5_3;
    cb[4][3] = ui->checkBox_5_4;
    cb[4][4] = ui->checkBox_5_5;
    cb[4][5] = ui->checkBox_5_6;
    cb[4][6] = ui->checkBox_5_7;
    cb[4][7] = ui->checkBox_5_8;
    cb[5][0] = ui->checkBox_6_1;
    cb[5][1] = ui->checkBox_6_2;
    cb[5][2] = ui->checkBox_6_3;
    cb[5][3] = ui->checkBox_6_4;
    cb[5][4] = ui->checkBox_6_5;
    cb[5][5] = ui->checkBox_6_6;
    cb[5][6] = ui->checkBox_6_7;
    cb[5][7] = ui->checkBox_6_8;
    cb[6][0] = ui->checkBox_7_1;
    cb[6][1] = ui->checkBox_7_2;
    cb[6][2] = ui->checkBox_7_3;
    cb[6][3] = ui->checkBox_7_4;
    cb[6][4] = ui->checkBox_7_5;
    cb[6][5] = ui->checkBox_7_6;
    cb[6][6] = ui->checkBox_7_7;
    cb[6][7] = ui->checkBox_7_8;

    te[0][0] = ui->timeEdit_1_1;
    te[0][1] = ui->timeEdit_1_2;
    te[0][2] = ui->timeEdit_1_3;
    te[0][3] = ui->timeEdit_1_4;
    te[0][4] = ui->timeEdit_1_5;
    te[0][5] = ui->timeEdit_1_6;
    te[0][6] = ui->timeEdit_1_7;
    te[0][7] = ui->timeEdit_1_8;
    te[1][0] = ui->timeEdit_2_1;
    te[1][1] = ui->timeEdit_2_2;
    te[1][2] = ui->timeEdit_2_3;
    te[1][3] = ui->timeEdit_2_4;
    te[1][4] = ui->timeEdit_2_5;
    te[1][5] = ui->timeEdit_2_6;
    te[1][6] = ui->timeEdit_2_7;
    te[1][7] = ui->timeEdit_2_8;
    te[2][0] = ui->timeEdit_3_1;
    te[2][1] = ui->timeEdit_3_2;
    te[2][2] = ui->timeEdit_3_3;
    te[2][3] = ui->timeEdit_3_4;
    te[2][4] = ui->timeEdit_3_5;
    te[2][5] = ui->timeEdit_3_6;
    te[2][6] = ui->timeEdit_3_7;
    te[2][7] = ui->timeEdit_3_8;
    te[3][0] = ui->timeEdit_4_1;
    te[3][1] = ui->timeEdit_4_2;
    te[3][2] = ui->timeEdit_4_3;
    te[3][3] = ui->timeEdit_4_4;
    te[3][4] = ui->timeEdit_4_5;
    te[3][5] = ui->timeEdit_4_6;
    te[3][6] = ui->timeEdit_4_7;
    te[3][7] = ui->timeEdit_4_8;
    te[4][0] = ui->timeEdit_5_1;
    te[4][1] = ui->timeEdit_5_2;
    te[4][2] = ui->timeEdit_5_3;
    te[4][3] = ui->timeEdit_5_4;
    te[4][4] = ui->timeEdit_5_5;
    te[4][5] = ui->timeEdit_5_6;
    te[4][6] = ui->timeEdit_5_7;
    te[4][7] = ui->timeEdit_5_8;
    te[5][0] = ui->timeEdit_6_1;
    te[5][1] = ui->timeEdit_6_2;
    te[5][2] = ui->timeEdit_6_3;
    te[5][3] = ui->timeEdit_6_4;
    te[5][4] = ui->timeEdit_6_5;
    te[5][5] = ui->timeEdit_6_6;
    te[5][6] = ui->timeEdit_6_7;
    te[5][7] = ui->timeEdit_6_8;
    te[6][0] = ui->timeEdit_7_1;
    te[6][1] = ui->timeEdit_7_2;
    te[6][2] = ui->timeEdit_7_3;
    te[6][3] = ui->timeEdit_7_4;
    te[6][4] = ui->timeEdit_7_5;
    te[6][5] = ui->timeEdit_7_6;
    te[6][6] = ui->timeEdit_7_7;
    te[6][7] = ui->timeEdit_7_8;

    rb[0][0][0] = ui->radioButton_111;
    rb[0][0][1] = ui->radioButton_112;
    rb[0][0][2] = ui->radioButton_113;
    rb[0][0][3] = ui->radioButton_114;
    rb[0][0][4] = ui->radioButton_115;
    rb[0][0][5] = ui->radioButton_116;
    rb[0][0][6] = ui->radioButton_117;
    rb[0][0][7] = ui->radioButton_118;//-----0
    rb[0][1][0] = ui->radioButton_121;
    rb[0][1][1] = ui->radioButton_122;
    rb[0][1][2] = ui->radioButton_123;
    rb[0][1][3] = ui->radioButton_124;
    rb[0][1][4] = ui->radioButton_125;
    rb[0][1][5] = ui->radioButton_126;
    rb[0][1][6] = ui->radioButton_127;
    rb[0][1][7] = ui->radioButton_128;//-----1
    rb[0][2][0] = ui->radioButton_131;
    rb[0][2][1] = ui->radioButton_132;
    rb[0][2][2] = ui->radioButton_133;
    rb[0][2][3] = ui->radioButton_134;
    rb[0][2][4] = ui->radioButton_135;
    rb[0][2][5] = ui->radioButton_136;
    rb[0][2][6] = ui->radioButton_137;
    rb[0][2][7] = ui->radioButton_138;//-----2
    rb[0][3][0] = ui->radioButton_141;
    rb[0][3][1] = ui->radioButton_142;
    rb[0][3][2] = ui->radioButton_143;
    rb[0][3][3] = ui->radioButton_144;
    rb[0][3][4] = ui->radioButton_145;
    rb[0][3][5] = ui->radioButton_146;
    rb[0][3][6] = ui->radioButton_147;
    rb[0][3][7] = ui->radioButton_148;//-----3
    rb[0][4][0] = ui->radioButton_151;
    rb[0][4][1] = ui->radioButton_152;
    rb[0][4][2] = ui->radioButton_153;
    rb[0][4][3] = ui->radioButton_154;
    rb[0][4][4] = ui->radioButton_155;
    rb[0][4][5] = ui->radioButton_156;
    rb[0][4][6] = ui->radioButton_157;
    rb[0][4][7] = ui->radioButton_158;//-----4
    rb[0][5][0] = ui->radioButton_161;
    rb[0][5][1] = ui->radioButton_162;
    rb[0][5][2] = ui->radioButton_163;
    rb[0][5][3] = ui->radioButton_164;
    rb[0][5][4] = ui->radioButton_165;
    rb[0][5][5] = ui->radioButton_166;
    rb[0][5][6] = ui->radioButton_167;
    rb[0][5][7] = ui->radioButton_168;//-----5
    rb[0][6][0] = ui->radioButton_171;
    rb[0][6][1] = ui->radioButton_172;
    rb[0][6][2] = ui->radioButton_173;
    rb[0][6][3] = ui->radioButton_174;
    rb[0][6][4] = ui->radioButton_175;
    rb[0][6][5] = ui->radioButton_176;
    rb[0][6][6] = ui->radioButton_177;
    rb[0][6][7] = ui->radioButton_178;//-----6
    rb[0][7][0] = ui->radioButton_181;
    rb[0][7][1] = ui->radioButton_182;
    rb[0][7][2] = ui->radioButton_183;
    rb[0][7][3] = ui->radioButton_184;
    rb[0][7][4] = ui->radioButton_185;
    rb[0][7][5] = ui->radioButton_186;
    rb[0][7][6] = ui->radioButton_187;
    rb[0][7][7] = ui->radioButton_188;//------7-----------0
    rb[1][0][0] = ui->radioButton_211;
    rb[1][0][1] = ui->radioButton_212;
    rb[1][0][2] = ui->radioButton_213;
    rb[1][0][3] = ui->radioButton_214;
    rb[1][0][4] = ui->radioButton_215;
    rb[1][0][5] = ui->radioButton_216;
    rb[1][0][6] = ui->radioButton_217;
    rb[1][0][7] = ui->radioButton_218;//-----0
    rb[1][1][0] = ui->radioButton_221;
    rb[1][1][1] = ui->radioButton_222;
    rb[1][1][2] = ui->radioButton_223;
    rb[1][1][3] = ui->radioButton_224;
    rb[1][1][4] = ui->radioButton_225;
    rb[1][1][5] = ui->radioButton_226;
    rb[1][1][6] = ui->radioButton_227;
    rb[1][1][7] = ui->radioButton_228;//-----1
    rb[1][2][0] = ui->radioButton_231;
    rb[1][2][1] = ui->radioButton_232;
    rb[1][2][2] = ui->radioButton_233;
    rb[1][2][3] = ui->radioButton_234;
    rb[1][2][4] = ui->radioButton_235;
    rb[1][2][5] = ui->radioButton_236;
    rb[1][2][6] = ui->radioButton_237;
    rb[1][2][7] = ui->radioButton_238;//-----2
    rb[1][3][0] = ui->radioButton_241;
    rb[1][3][1] = ui->radioButton_242;
    rb[1][3][2] = ui->radioButton_243;
    rb[1][3][3] = ui->radioButton_244;
    rb[1][3][4] = ui->radioButton_245;
    rb[1][3][5] = ui->radioButton_246;
    rb[1][3][6] = ui->radioButton_247;
    rb[1][3][7] = ui->radioButton_248;//-----3
    rb[1][4][0] = ui->radioButton_251;
    rb[1][4][1] = ui->radioButton_252;
    rb[1][4][2] = ui->radioButton_253;
    rb[1][4][3] = ui->radioButton_254;
    rb[1][4][4] = ui->radioButton_255;
    rb[1][4][5] = ui->radioButton_256;
    rb[1][4][6] = ui->radioButton_257;
    rb[1][4][7] = ui->radioButton_258;//-----4
    rb[1][5][0] = ui->radioButton_261;
    rb[1][5][1] = ui->radioButton_262;
    rb[1][5][2] = ui->radioButton_263;
    rb[1][5][3] = ui->radioButton_264;
    rb[1][5][4] = ui->radioButton_265;
    rb[1][5][5] = ui->radioButton_266;
    rb[1][5][6] = ui->radioButton_267;
    rb[1][5][7] = ui->radioButton_268;//-----5
    rb[1][6][0] = ui->radioButton_271;
    rb[1][6][1] = ui->radioButton_272;
    rb[1][6][2] = ui->radioButton_273;
    rb[1][6][3] = ui->radioButton_274;
    rb[1][6][4] = ui->radioButton_275;
    rb[1][6][5] = ui->radioButton_276;
    rb[1][6][6] = ui->radioButton_277;
    rb[1][6][7] = ui->radioButton_278;//-----6
    rb[1][7][0] = ui->radioButton_281;
    rb[1][7][1] = ui->radioButton_282;
    rb[1][7][2] = ui->radioButton_283;
    rb[1][7][3] = ui->radioButton_284;
    rb[1][7][4] = ui->radioButton_285;
    rb[1][7][5] = ui->radioButton_286;
    rb[1][7][6] = ui->radioButton_287;
    rb[1][7][7] = ui->radioButton_288;//------7-----------1
    rb[2][0][0] = ui->radioButton_311;
    rb[2][0][1] = ui->radioButton_312;
    rb[2][0][2] = ui->radioButton_313;
    rb[2][0][3] = ui->radioButton_314;
    rb[2][0][4] = ui->radioButton_315;
    rb[2][0][5] = ui->radioButton_316;
    rb[2][0][6] = ui->radioButton_317;
    rb[2][0][7] = ui->radioButton_318;//-----0
    rb[2][1][0] = ui->radioButton_321;
    rb[2][1][1] = ui->radioButton_322;
    rb[2][1][2] = ui->radioButton_323;
    rb[2][1][3] = ui->radioButton_324;
    rb[2][1][4] = ui->radioButton_325;
    rb[2][1][5] = ui->radioButton_326;
    rb[2][1][6] = ui->radioButton_327;
    rb[2][1][7] = ui->radioButton_328;//-----1
    rb[2][2][0] = ui->radioButton_331;
    rb[2][2][1] = ui->radioButton_332;
    rb[2][2][2] = ui->radioButton_333;
    rb[2][2][3] = ui->radioButton_334;
    rb[2][2][4] = ui->radioButton_335;
    rb[2][2][5] = ui->radioButton_336;
    rb[2][2][6] = ui->radioButton_337;
    rb[2][2][7] = ui->radioButton_338;//-----2
    rb[2][3][0] = ui->radioButton_341;
    rb[2][3][1] = ui->radioButton_342;
    rb[2][3][2] = ui->radioButton_343;
    rb[2][3][3] = ui->radioButton_344;
    rb[2][3][4] = ui->radioButton_345;
    rb[2][3][5] = ui->radioButton_346;
    rb[2][3][6] = ui->radioButton_347;
    rb[2][3][7] = ui->radioButton_348;//-----3
    rb[2][4][0] = ui->radioButton_351;
    rb[2][4][1] = ui->radioButton_352;
    rb[2][4][2] = ui->radioButton_353;
    rb[2][4][3] = ui->radioButton_354;
    rb[2][4][4] = ui->radioButton_355;
    rb[2][4][5] = ui->radioButton_356;
    rb[2][4][6] = ui->radioButton_357;
    rb[2][4][7] = ui->radioButton_358;//-----4
    rb[2][5][0] = ui->radioButton_361;
    rb[2][5][1] = ui->radioButton_362;
    rb[2][5][2] = ui->radioButton_363;
    rb[2][5][3] = ui->radioButton_364;
    rb[2][5][4] = ui->radioButton_365;
    rb[2][5][5] = ui->radioButton_366;
    rb[2][5][6] = ui->radioButton_367;
    rb[2][5][7] = ui->radioButton_368;//-----5
    rb[2][6][0] = ui->radioButton_371;
    rb[2][6][1] = ui->radioButton_372;
    rb[2][6][2] = ui->radioButton_373;
    rb[2][6][3] = ui->radioButton_374;
    rb[2][6][4] = ui->radioButton_375;
    rb[2][6][5] = ui->radioButton_376;
    rb[2][6][6] = ui->radioButton_377;
    rb[2][6][7] = ui->radioButton_378;//-----6
    rb[2][7][0] = ui->radioButton_381;
    rb[2][7][1] = ui->radioButton_382;
    rb[2][7][2] = ui->radioButton_383;
    rb[2][7][3] = ui->radioButton_384;
    rb[2][7][4] = ui->radioButton_385;
    rb[2][7][5] = ui->radioButton_386;
    rb[2][7][6] = ui->radioButton_387;
    rb[2][7][7] = ui->radioButton_388;//------7-----------2
    rb[3][0][0] = ui->radioButton_411;
    rb[3][0][1] = ui->radioButton_412;
    rb[3][0][2] = ui->radioButton_413;
    rb[3][0][3] = ui->radioButton_414;
    rb[3][0][4] = ui->radioButton_415;
    rb[3][0][5] = ui->radioButton_416;
    rb[3][0][6] = ui->radioButton_417;
    rb[3][0][7] = ui->radioButton_418;//-----0
    rb[3][1][0] = ui->radioButton_421;
    rb[3][1][1] = ui->radioButton_422;
    rb[3][1][2] = ui->radioButton_423;
    rb[3][1][3] = ui->radioButton_424;
    rb[3][1][4] = ui->radioButton_425;
    rb[3][1][5] = ui->radioButton_426;
    rb[3][1][6] = ui->radioButton_427;
    rb[3][1][7] = ui->radioButton_428;//-----1
    rb[3][2][0] = ui->radioButton_431;
    rb[3][2][1] = ui->radioButton_432;
    rb[3][2][2] = ui->radioButton_433;
    rb[3][2][3] = ui->radioButton_434;
    rb[3][2][4] = ui->radioButton_435;
    rb[3][2][5] = ui->radioButton_436;
    rb[3][2][6] = ui->radioButton_437;
    rb[3][2][7] = ui->radioButton_438;//-----2
    rb[3][3][0] = ui->radioButton_441;
    rb[3][3][1] = ui->radioButton_442;
    rb[3][3][2] = ui->radioButton_443;
    rb[3][3][3] = ui->radioButton_444;
    rb[3][3][4] = ui->radioButton_445;
    rb[3][3][5] = ui->radioButton_446;
    rb[3][3][6] = ui->radioButton_447;
    rb[3][3][7] = ui->radioButton_448;//-----3
    rb[3][4][0] = ui->radioButton_451;
    rb[3][4][1] = ui->radioButton_452;
    rb[3][4][2] = ui->radioButton_453;
    rb[3][4][3] = ui->radioButton_454;
    rb[3][4][4] = ui->radioButton_455;
    rb[3][4][5] = ui->radioButton_456;
    rb[3][4][6] = ui->radioButton_457;
    rb[3][4][7] = ui->radioButton_458;//-----4
    rb[3][5][0] = ui->radioButton_461;
    rb[3][5][1] = ui->radioButton_462;
    rb[3][5][2] = ui->radioButton_463;
    rb[3][5][3] = ui->radioButton_464;
    rb[3][5][4] = ui->radioButton_465;
    rb[3][5][5] = ui->radioButton_466;
    rb[3][5][6] = ui->radioButton_467;
    rb[3][5][7] = ui->radioButton_468;//-----5
    rb[3][6][0] = ui->radioButton_471;
    rb[3][6][1] = ui->radioButton_472;
    rb[3][6][2] = ui->radioButton_473;
    rb[3][6][3] = ui->radioButton_474;
    rb[3][6][4] = ui->radioButton_475;
    rb[3][6][5] = ui->radioButton_476;
    rb[3][6][6] = ui->radioButton_477;
    rb[3][6][7] = ui->radioButton_478;//-----6
    rb[3][7][0] = ui->radioButton_481;
    rb[3][7][1] = ui->radioButton_482;
    rb[3][7][2] = ui->radioButton_483;
    rb[3][7][3] = ui->radioButton_484;
    rb[3][7][4] = ui->radioButton_485;
    rb[3][7][5] = ui->radioButton_486;
    rb[3][7][6] = ui->radioButton_487;
    rb[3][7][7] = ui->radioButton_488;//------7-----------3
    rb[4][0][0] = ui->radioButton_511;
    rb[4][0][1] = ui->radioButton_512;
    rb[4][0][2] = ui->radioButton_513;
    rb[4][0][3] = ui->radioButton_514;
    rb[4][0][4] = ui->radioButton_515;
    rb[4][0][5] = ui->radioButton_516;
    rb[4][0][6] = ui->radioButton_517;
    rb[4][0][7] = ui->radioButton_518;//-----0
    rb[4][1][0] = ui->radioButton_521;
    rb[4][1][1] = ui->radioButton_522;
    rb[4][1][2] = ui->radioButton_523;
    rb[4][1][3] = ui->radioButton_524;
    rb[4][1][4] = ui->radioButton_525;
    rb[4][1][5] = ui->radioButton_526;
    rb[4][1][6] = ui->radioButton_527;
    rb[4][1][7] = ui->radioButton_528;//-----1
    rb[4][2][0] = ui->radioButton_531;
    rb[4][2][1] = ui->radioButton_532;
    rb[4][2][2] = ui->radioButton_533;
    rb[4][2][3] = ui->radioButton_534;
    rb[4][2][4] = ui->radioButton_535;
    rb[4][2][5] = ui->radioButton_536;
    rb[4][2][6] = ui->radioButton_537;
    rb[4][2][7] = ui->radioButton_538;//-----2
    rb[4][3][0] = ui->radioButton_541;
    rb[4][3][1] = ui->radioButton_542;
    rb[4][3][2] = ui->radioButton_543;
    rb[4][3][3] = ui->radioButton_544;
    rb[4][3][4] = ui->radioButton_545;
    rb[4][3][5] = ui->radioButton_546;
    rb[4][3][6] = ui->radioButton_547;
    rb[4][3][7] = ui->radioButton_548;//-----3
    rb[4][4][0] = ui->radioButton_551;
    rb[4][4][1] = ui->radioButton_552;
    rb[4][4][2] = ui->radioButton_553;
    rb[4][4][3] = ui->radioButton_554;
    rb[4][4][4] = ui->radioButton_555;
    rb[4][4][5] = ui->radioButton_556;
    rb[4][4][6] = ui->radioButton_557;
    rb[4][4][7] = ui->radioButton_558;//-----4
    rb[4][5][0] = ui->radioButton_561;
    rb[4][5][1] = ui->radioButton_562;
    rb[4][5][2] = ui->radioButton_563;
    rb[4][5][3] = ui->radioButton_564;
    rb[4][5][4] = ui->radioButton_565;
    rb[4][5][5] = ui->radioButton_566;
    rb[4][5][6] = ui->radioButton_567;
    rb[4][5][7] = ui->radioButton_568;//-----5
    rb[4][6][0] = ui->radioButton_571;
    rb[4][6][1] = ui->radioButton_572;
    rb[4][6][2] = ui->radioButton_573;
    rb[4][6][3] = ui->radioButton_574;
    rb[4][6][4] = ui->radioButton_575;
    rb[4][6][5] = ui->radioButton_576;
    rb[4][6][6] = ui->radioButton_577;
    rb[4][6][7] = ui->radioButton_578;//-----6
    rb[4][7][0] = ui->radioButton_581;
    rb[4][7][1] = ui->radioButton_582;
    rb[4][7][2] = ui->radioButton_583;
    rb[4][7][3] = ui->radioButton_584;
    rb[4][7][4] = ui->radioButton_585;
    rb[4][7][5] = ui->radioButton_586;
    rb[4][7][6] = ui->radioButton_587;
    rb[4][7][7] = ui->radioButton_588;//------7-----------4
    rb[5][0][0] = ui->radioButton_611;
    rb[5][0][1] = ui->radioButton_612;
    rb[5][0][2] = ui->radioButton_613;
    rb[5][0][3] = ui->radioButton_614;
    rb[5][0][4] = ui->radioButton_615;
    rb[5][0][5] = ui->radioButton_616;
    rb[5][0][6] = ui->radioButton_617;
    rb[5][0][7] = ui->radioButton_618;//-----0
    rb[5][1][0] = ui->radioButton_621;
    rb[5][1][1] = ui->radioButton_622;
    rb[5][1][2] = ui->radioButton_623;
    rb[5][1][3] = ui->radioButton_624;
    rb[5][1][4] = ui->radioButton_625;
    rb[5][1][5] = ui->radioButton_626;
    rb[5][1][6] = ui->radioButton_627;
    rb[5][1][7] = ui->radioButton_628;//-----1
    rb[5][2][0] = ui->radioButton_631;
    rb[5][2][1] = ui->radioButton_632;
    rb[5][2][2] = ui->radioButton_633;
    rb[5][2][3] = ui->radioButton_634;
    rb[5][2][4] = ui->radioButton_635;
    rb[5][2][5] = ui->radioButton_636;
    rb[5][2][6] = ui->radioButton_637;
    rb[5][2][7] = ui->radioButton_638;//-----2
    rb[5][3][0] = ui->radioButton_641;
    rb[5][3][1] = ui->radioButton_642;
    rb[5][3][2] = ui->radioButton_643;
    rb[5][3][3] = ui->radioButton_644;
    rb[5][3][4] = ui->radioButton_645;
    rb[5][3][5] = ui->radioButton_646;
    rb[5][3][6] = ui->radioButton_647;
    rb[5][3][7] = ui->radioButton_648;//-----3
    rb[5][4][0] = ui->radioButton_651;
    rb[5][4][1] = ui->radioButton_652;
    rb[5][4][2] = ui->radioButton_653;
    rb[5][4][3] = ui->radioButton_654;
    rb[5][4][4] = ui->radioButton_655;
    rb[5][4][5] = ui->radioButton_656;
    rb[5][4][6] = ui->radioButton_657;
    rb[5][4][7] = ui->radioButton_658;//-----4
    rb[5][5][0] = ui->radioButton_661;
    rb[5][5][1] = ui->radioButton_662;
    rb[5][5][2] = ui->radioButton_663;
    rb[5][5][3] = ui->radioButton_664;
    rb[5][5][4] = ui->radioButton_665;
    rb[5][5][5] = ui->radioButton_666;
    rb[5][5][6] = ui->radioButton_667;
    rb[5][5][7] = ui->radioButton_668;//-----5
    rb[5][6][0] = ui->radioButton_671;
    rb[5][6][1] = ui->radioButton_672;
    rb[5][6][2] = ui->radioButton_673;
    rb[5][6][3] = ui->radioButton_674;
    rb[5][6][4] = ui->radioButton_675;
    rb[5][6][5] = ui->radioButton_676;
    rb[5][6][6] = ui->radioButton_677;
    rb[5][6][7] = ui->radioButton_678;//-----6
    rb[5][7][0] = ui->radioButton_681;
    rb[5][7][1] = ui->radioButton_682;
    rb[5][7][2] = ui->radioButton_683;
    rb[5][7][3] = ui->radioButton_684;
    rb[5][7][4] = ui->radioButton_685;
    rb[5][7][5] = ui->radioButton_686;
    rb[5][7][6] = ui->radioButton_687;
    rb[5][7][7] = ui->radioButton_688;//------7-----------5
    rb[6][0][0] = ui->radioButton_711;
    rb[6][0][1] = ui->radioButton_712;
    rb[6][0][2] = ui->radioButton_713;
    rb[6][0][3] = ui->radioButton_714;
    rb[6][0][4] = ui->radioButton_715;
    rb[6][0][5] = ui->radioButton_716;
    rb[6][0][6] = ui->radioButton_717;
    rb[6][0][7] = ui->radioButton_718;//-----0
    rb[6][1][0] = ui->radioButton_721;
    rb[6][1][1] = ui->radioButton_722;
    rb[6][1][2] = ui->radioButton_723;
    rb[6][1][3] = ui->radioButton_724;
    rb[6][1][4] = ui->radioButton_725;
    rb[6][1][5] = ui->radioButton_726;
    rb[6][1][6] = ui->radioButton_727;
    rb[6][1][7] = ui->radioButton_728;//-----1
    rb[6][2][0] = ui->radioButton_731;
    rb[6][2][1] = ui->radioButton_732;
    rb[6][2][2] = ui->radioButton_733;
    rb[6][2][3] = ui->radioButton_734;
    rb[6][2][4] = ui->radioButton_735;
    rb[6][2][5] = ui->radioButton_736;
    rb[6][2][6] = ui->radioButton_737;
    rb[6][2][7] = ui->radioButton_738;//-----2
    rb[6][3][0] = ui->radioButton_741;
    rb[6][3][1] = ui->radioButton_742;
    rb[6][3][2] = ui->radioButton_743;
    rb[6][3][3] = ui->radioButton_744;
    rb[6][3][4] = ui->radioButton_745;
    rb[6][3][5] = ui->radioButton_746;
    rb[6][3][6] = ui->radioButton_747;
    rb[6][3][7] = ui->radioButton_748;//-----3
    rb[6][4][0] = ui->radioButton_751;
    rb[6][4][1] = ui->radioButton_752;
    rb[6][4][2] = ui->radioButton_753;
    rb[6][4][3] = ui->radioButton_754;
    rb[6][4][4] = ui->radioButton_755;
    rb[6][4][5] = ui->radioButton_756;
    rb[6][4][6] = ui->radioButton_757;
    rb[6][4][7] = ui->radioButton_758;//-----4
    rb[6][5][0] = ui->radioButton_761;
    rb[6][5][1] = ui->radioButton_762;
    rb[6][5][2] = ui->radioButton_763;
    rb[6][5][3] = ui->radioButton_764;
    rb[6][5][4] = ui->radioButton_765;
    rb[6][5][5] = ui->radioButton_766;
    rb[6][5][6] = ui->radioButton_767;
    rb[6][5][7] = ui->radioButton_768;//-----5
    rb[6][6][0] = ui->radioButton_771;
    rb[6][6][1] = ui->radioButton_772;
    rb[6][6][2] = ui->radioButton_773;
    rb[6][6][3] = ui->radioButton_774;
    rb[6][6][4] = ui->radioButton_775;
    rb[6][6][5] = ui->radioButton_776;
    rb[6][6][6] = ui->radioButton_777;
    rb[6][6][7] = ui->radioButton_778;//-----6
    rb[6][7][0] = ui->radioButton_781;
    rb[6][7][1] = ui->radioButton_782;
    rb[6][7][2] = ui->radioButton_783;
    rb[6][7][3] = ui->radioButton_784;
    rb[6][7][4] = ui->radioButton_785;
    rb[6][7][5] = ui->radioButton_786;
    rb[6][7][6] = ui->radioButton_787;
    rb[6][7][7] = ui->radioButton_788;//------7-----------6

    ui->checkBox->setChecked(st->noWeekLimit());
    showStatus();

    this->setWindowTitle("聚诚LED定时系统");
    this->setWindowIcon(QIcon("txled.ico"));
    this->setFixedSize(460, 380);
}

Widget::~Widget()
{
    delete ui;
    delete st;
}

void Widget::showStatus()
{
    if(st->noWeekLimit()){
        ui->tabWidget->setCurrentIndex(0);
        ui->tabWidget->setTabText(0, "每天");
        for(int i = 1; i <=6; i++)
            ui->tabWidget->setTabEnabled(i, false);
        for(int j = 0; j <= 7; j++){
            cb[0][j]->setChecked(st->getTimerStatus(0, j));
            te[0][j]->setTime(QTime(st->getTimerHour(0, j), st->getTimerMinute(0, j)));
            for(int k = 0; k <= 7; k++)
                rb[0][j][k]->setChecked(st->getSwitch(0, j, k));
            if(!(st->getTimerStatus(0, j))){
                te[0][j]->setEnabled(false);
                for(int k = 0; k <= 7; k++)
                    rb[0][j][k]->setEnabled(false);
            }
            else{
                te[0][j]->setEnabled(true);
                for(int k = 0; k <= 7; k++)
                    rb[0][j][k]->setEnabled(true);
            }
        }
    }
    else{
        ui->tabWidget->setTabText(0, "星期一");
        for(int i = 1; i <= 6; i++)
            ui->tabWidget->setTabEnabled(i, true);
        for(int i = 0; i <= 6; i++){
            for(int j = 0; j <= 7; j++){
                cb[i][j]->setChecked(st->getTimerStatus(i, j));
                te[i][j]->setTime(QTime(st->getTimerHour(i, j), st->getTimerMinute(i, j)));
                for(int k = 0; k <= 7; k++)
                    rb[i][j][k]->setChecked(st->getSwitch(i, j, k));
                if(!(st->getTimerStatus(i, j))){
                    te[i][j]->setEnabled(false);
                    for(int k = 0; k <= 7; k++)
                        rb[i][j][k]->setEnabled(false);
                }
                else{
                    te[i][j]->setEnabled(true);
                    for(int k = 0; k <= 7; k++)
                        rb[i][j][k]->setEnabled(true);
                }
            }
        }
    }
}

void Widget::on_checkBox_clicked()
{
    st->setNoWeekLimit(ui->checkBox->isChecked());
    showStatus();
    st->write2com();
}

void Widget::on_pushButton_clicked()
{
    if(st->noWeekLimit())
        for(int i = 0; i <=6; i++){
            for(int j = 0; j <= 7; j++){
                st->setTimerStatue(i, j, cb[0][j]->isChecked());
                st->setTimerHour(i, j, te[0][j]->time().hour());
                st->setTimerMinute(i, j, te[0][j]->time().minute());
                for(int k = 0; k <= 7; k++)
                    st->setSwitch(i, j, k, rb[0][j][k]->isChecked());
            }
        }
    else
        for(int i = 0; i <=6; i++){
            for(int j = 0; j <= 7; j++){
                st->setTimerStatue(i, j, cb[i][j]->isChecked());
                st->setTimerHour(i, j, te[i][j]->time().hour());
                st->setTimerMinute(i, j, te[i][j]->time().minute());
                for(int k = 0; k <= 7; k++)
                    st->setSwitch(i, j, k, rb[i][j][k]->isChecked());
            }
        }
    st->write2com();
}

void Widget::enableTimer(int w, int n)
{
    if(cb[w][n]->isChecked()){
        te[w][n]->setEnabled(true);
        for(int k = 0; k <= 7; k++)
            rb[w][n][k]->setEnabled(true);
    }
    else{
        te[w][n]->setEnabled(false);
        for(int k = 0; k <= 7; k++)
            rb[w][n][k]->setEnabled(false);
    }
}

void Widget::on_checkBox_1_1_clicked()
{
    enableTimer(0, 0);
}

void Widget::on_checkBox_1_2_clicked()
{
    enableTimer(0, 1);
}

void Widget::on_checkBox_1_3_clicked()
{
    enableTimer(0, 2);
}

void Widget::on_checkBox_1_4_clicked()
{
    enableTimer(0, 3);
}

void Widget::on_checkBox_1_5_clicked()
{
    enableTimer(0, 4);
}

void Widget::on_checkBox_1_6_clicked()
{
    enableTimer(0, 5);
}

void Widget::on_checkBox_1_7_clicked()
{
    enableTimer(0, 6);
}

void Widget::on_checkBox_1_8_clicked()
{
    enableTimer(0, 7);
}

void Widget::on_checkBox_2_1_clicked()
{
    enableTimer(1, 0);
}

void Widget::on_checkBox_2_2_clicked()
{
    enableTimer(1, 1);
}

void Widget::on_checkBox_2_3_clicked()
{
    enableTimer(1, 2);
}

void Widget::on_checkBox_2_4_clicked()
{
    enableTimer(1, 3);
}

void Widget::on_checkBox_2_5_clicked()
{
    enableTimer(1, 4);
}

void Widget::on_checkBox_2_6_clicked()
{
    enableTimer(1, 5);
}

void Widget::on_checkBox_2_7_clicked()
{
    enableTimer(1, 6);
}

void Widget::on_checkBox_2_8_clicked()
{
    enableTimer(1, 7);
}

void Widget::on_checkBox_3_1_clicked()
{
    enableTimer(2, 0);
}

void Widget::on_checkBox_3_2_clicked()
{
    enableTimer(2, 1);
}

void Widget::on_checkBox_3_3_clicked()
{
    enableTimer(2, 2);
}

void Widget::on_checkBox_3_4_clicked()
{
    enableTimer(2, 3);
}

void Widget::on_checkBox_3_5_clicked()
{
    enableTimer(2, 4);
}

void Widget::on_checkBox_3_6_clicked()
{
    enableTimer(2, 5);
}

void Widget::on_checkBox_3_7_clicked()
{
    enableTimer(2, 6);
}

void Widget::on_checkBox_3_8_clicked()
{
    enableTimer(2, 7);
}

void Widget::on_checkBox_4_1_clicked()
{
    enableTimer(3, 0);
}

void Widget::on_checkBox_4_2_clicked()
{
    enableTimer(3, 1);
}

void Widget::on_checkBox_4_3_clicked()
{
    enableTimer(3, 2);
}

void Widget::on_checkBox_4_4_clicked()
{
    enableTimer(3, 3);
}

void Widget::on_checkBox_4_5_clicked()
{
    enableTimer(3, 4);
}

void Widget::on_checkBox_4_6_clicked()
{
    enableTimer(3, 5);
}

void Widget::on_checkBox_4_7_clicked()
{
    enableTimer(3, 6);
}

void Widget::on_checkBox_4_8_clicked()
{
    enableTimer(3, 7);
}

void Widget::on_checkBox_5_1_clicked()
{
    enableTimer(4, 0);
}

void Widget::on_checkBox_5_2_clicked()
{
    enableTimer(4, 1);
}

void Widget::on_checkBox_5_3_clicked()
{
    enableTimer(4, 2);
}

void Widget::on_checkBox_5_4_clicked()
{
    enableTimer(4, 3);
}

void Widget::on_checkBox_5_5_clicked()
{
    enableTimer(4, 4);
}

void Widget::on_checkBox_5_6_clicked()
{
    enableTimer(4, 5);
}

void Widget::on_checkBox_5_7_clicked()
{
    enableTimer(4, 6);
}

void Widget::on_checkBox_5_8_clicked()
{
    enableTimer(4, 7);
}

void Widget::on_checkBox_6_1_clicked()
{
    enableTimer(5, 0);
}

void Widget::on_checkBox_6_2_clicked()
{
    enableTimer(5, 1);
}

void Widget::on_checkBox_6_3_clicked()
{
    enableTimer(5, 2);
}

void Widget::on_checkBox_6_4_clicked()
{
    enableTimer(5, 3);
}

void Widget::on_checkBox_6_5_clicked()
{
    enableTimer(5, 4);
}

void Widget::on_checkBox_6_6_clicked()
{
    enableTimer(5, 5);
}

void Widget::on_checkBox_6_7_clicked()
{
    enableTimer(5, 6);
}

void Widget::on_checkBox_6_8_clicked()
{
    enableTimer(5, 7);
}

void Widget::on_checkBox_7_1_clicked()
{
    enableTimer(6, 0);
}

void Widget::on_checkBox_7_2_clicked()
{
    enableTimer(6, 1);
}

void Widget::on_checkBox_7_3_clicked()
{
    enableTimer(6, 2);
}

void Widget::on_checkBox_7_4_clicked()
{
    enableTimer(6, 3);
}

void Widget::on_checkBox_7_5_clicked()
{
    enableTimer(6, 4);
}

void Widget::on_checkBox_7_6_clicked()
{
    enableTimer(6, 5);
}

void Widget::on_checkBox_7_7_clicked()
{
    enableTimer(6, 6);
}

void Widget::on_checkBox_7_8_clicked()
{
    enableTimer(6, 7);
}
