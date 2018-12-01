#include "../core_include/resource.h"

static const unsigned short raw_data[] = {
    6404, 8485, 6404, 8485, 6404, 6404, 8485, 6404, 8485, 6404, 6404, 6405, 8485, 6404, 6404, 6404, 6405, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 8485, 6405, 8485, 6404, 6404, 6405, 6404, 6405, 6405, 6404, 6404, 6404, 8453, 6404, 6404, 6404, 6405, 6404, 6404, 8485, 8485, 6404, 
    8485, 8485, 6404, 6405, 6404, 8485, 8484, 6404, 6405, 6404, 6404, 8485, 6404, 8485, 8453, 6404, 6405, 8485, 6404, 6404, 6404, 6404, 6404, 8485, 8485, 6404, 6405, 6404, 6404, 6404, 8453, 8485, 8485, 6404, 8485, 6405, 8485, 8485, 6404, 8485, 6404, 8453, 8485, 8485, 6405, 8485, 6404, 
    6404, 6404, 6404, 8485, 6404, 8485, 8485, 6404, 8485, 6405, 6404, 8485, 8485, 6404, 6404, 6404, 8485, 6405, 8485, 6404, 8485, 8485, 8485, 6404, 6404, 6404, 6404, 8485, 8485, 6404, 6404, 8485, 6404, 8485, 6404, 8485, 6404, 8485, 6404, 6405, 6404, 6404, 8485, 8485, 6404, 6405, 8485, 
    6404, 6404, 8485, 6404, 6405, 6404, 6404, 8485, 6404, 8485, 6404, 6404, 6404, 6404, 8485, 6404, 6405, 6404, 6404, 8485, 8485, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6405, 8485, 8485, 8485, 6404, 6404, 8485, 6404, 8485, 8485, 6404, 6404, 8485, 6404, 6404, 6404, 
    8485, 6404, 6404, 8485, 8485, 6404, 6404, 6404, 6404, 6404, 6405, 6404, 8485, 6405, 6404, 6404, 6405, 8485, 6404, 6404, 6405, 8485, 6404, 6404, 6405, 6404, 6405, 6405, 6404, 8485, 8485, 6404, 6404, 8485, 6404, 8485, 6404, 6404, 6405, 6404, 8485, 6404, 8485, 6405, 6404, 8485, 6404, 
    6404, 6405, 6404, 6404, 6405, 8485, 6404, 6404, 6404, 6405, 8485, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 8485, 8485, 6404, 8485, 6405, 8485, 8485, 6404, 6404, 6405, 6404, 6405, 6404, 8485, 8485, 8484, 8485, 6404, 8485, 6404, 6405, 6405, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 
    6405, 8485, 6404, 6404, 8485, 6404, 8485, 6405, 8485, 6404, 8484, 8485, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 8485, 8485, 6404, 8485, 8485, 8485, 6404, 6404, 8485, 6404, 6405, 6404, 8485, 6405, 6404, 8485, 8485, 6404, 6404, 6404, 6404, 8485, 8485, 8485, 
    8485, 6404, 6404, 6404, 8485, 6404, 8485, 6404, 8485, 6404, 8485, 8485, 6404, 8485, 6404, 6404, 6405, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 8485, 6405, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 8485, 8485, 8485, 8484, 8485, 8485, 6404, 6404, 6404, 8485, 
    6404, 8485, 6404, 6404, 8485, 6404, 6404, 8485, 8485, 8485, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 6405, 8485, 6404, 6404, 6404, 6404, 6404, 6405, 8485, 6404, 6405, 6404, 6404, 6404, 6405, 6404, 6404, 8485, 6404, 6405, 8485, 6404, 6404, 6404, 
    6404, 6404, 6404, 8485, 8485, 6404, 8485, 6404, 6404, 8485, 6404, 8485, 8485, 6404, 6404, 6404, 6404, 8485, 6404, 8485, 6405, 8485, 8485, 6404, 6404, 6404, 6371, 6371, 6339, 6338, 6306, 6306, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6405, 6404, 6404, 6404, 8485, 8485, 6404, 
    8485, 6404, 8485, 6405, 6404, 8485, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6372, 6371, 6339, 6371, 6306, 6339, 8551, 10795, 10959, 13171, 15382, 17595, 19967, 6306, 8485, 6404, 8485, 6405, 8485, 6404, 6404, 6404, 8485, 6405, 6404, 6404, 8485, 6404, 
    6404, 8485, 6404, 8453, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6306, 6371, 8584, 10795, 10992, 15318, 10828, 17693, 17759, 17758, 17726, 17725, 17693, 17693, 17660, 17759, 6306, 6404, 8485, 6404, 6404, 6405, 6404, 6404, 6404, 6404, 6404, 6405, 6404, 8453, 8485, 
    6404, 8485, 8485, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6306, 17726, 17759, 17758, 17726, 17693, 17758, 10894, 17693, 17660, 17660, 17660, 17660, 17660, 17660, 17660, 17759, 6306, 6404, 8485, 8485, 6404, 6404, 6404, 6405, 6405, 8485, 6404, 6404, 6404, 8485, 6404, 
    6404, 6404, 8485, 6405, 6404, 8485, 8485, 8485, 6404, 6404, 6405, 6404, 6404, 8485, 6404, 6306, 17759, 17660, 17660, 17660, 17660, 17693, 10894, 17693, 17660, 17660, 17660, 17660, 17660, 17660, 17660, 17759, 6306, 6404, 6404, 6404, 8485, 8485, 8485, 8485, 8484, 6405, 6405, 6404, 6404, 6404, 6405, 
    8485, 6404, 6405, 6404, 8485, 6404, 6404, 6404, 8485, 8485, 8485, 6404, 6404, 6404, 6404, 6306, 17759, 17660, 17660, 17660, 17660, 17693, 10894, 17693, 17660, 17660, 17660, 17660, 17660, 17660, 17660, 17759, 6306, 8452, 8485, 6404, 6404, 8485, 6405, 6404, 6405, 8485, 6404, 6405, 8453, 8485, 6404, 
    8485, 8485, 8485, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6306, 17759, 17660, 17660, 17660, 17660, 17693, 10894, 17693, 17660, 17660, 17660, 17660, 17660, 17660, 17660, 17759, 6306, 6404, 6404, 8485, 8485, 6404, 6404, 6405, 6404, 6404, 6404, 8485, 8485, 6404, 8485, 
    6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6405, 8485, 8485, 6404, 6404, 8485, 6274, 19871, 17693, 17693, 17693, 17693, 17759, 10926, 17758, 17693, 17693, 17693, 17693, 17693, 17693, 17693, 19871, 6306, 8484, 6404, 8485, 6404, 6404, 8485, 6404, 6404, 8485, 6404, 6404, 8485, 6404, 6404, 
    6404, 8485, 6404, 6404, 6404, 6404, 6405, 8485, 6404, 6405, 6404, 8485, 6404, 6405, 6404, 6371, 10959, 10893, 10893, 10893, 10893, 10926, 8584, 10894, 10893, 10893, 10893, 10893, 10893, 10893, 10893, 10959, 6371, 8485, 6404, 6404, 6404, 6404, 8453, 6404, 6405, 8485, 8485, 6404, 6404, 6404, 6404, 
    6405, 8485, 8485, 6404, 8485, 6404, 6404, 6405, 6404, 6405, 6405, 6405, 6404, 6404, 6405, 6306, 19871, 17693, 17693, 17693, 17693, 17759, 10926, 17758, 17693, 17693, 17693, 17693, 17693, 17693, 17693, 19871, 6306, 6404, 8485, 8485, 8485, 8485, 8485, 6404, 6404, 6405, 6404, 6404, 6405, 6404, 6404, 
    6404, 6404, 6405, 6404, 6405, 8485, 6404, 6404, 8485, 6405, 6405, 6404, 8485, 6404, 8485, 6305, 17759, 17660, 17660, 17660, 17660, 17693, 10894, 17693, 17660, 17660, 17660, 17660, 17660, 17660, 17660, 17759, 6306, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 8485, 8485, 8485, 
    6405, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 6405, 6405, 6404, 8485, 6405, 8485, 6404, 6306, 17759, 17660, 17660, 17660, 17660, 17693, 10894, 17693, 17660, 17660, 17660, 17660, 17660, 17660, 17660, 17759, 6306, 6404, 8485, 6404, 6404, 6404, 8485, 8485, 6404, 6404, 8453, 6404, 6404, 8485, 6405, 
    8485, 6404, 8485, 8485, 6405, 6404, 6404, 8485, 6404, 6404, 8485, 6404, 6404, 8485, 8485, 6273, 17759, 17660, 17660, 17660, 17660, 17693, 10894, 17693, 17660, 17660, 17660, 17660, 17660, 17660, 17660, 17759, 6306, 8485, 6404, 6405, 6404, 6404, 6404, 8485, 6404, 8485, 6405, 6404, 8485, 6404, 8485, 
    6404, 6404, 6404, 8485, 8485, 6404, 6404, 8485, 8485, 6404, 6404, 6404, 8485, 8485, 6405, 6306, 17759, 17660, 17660, 17660, 17660, 17693, 10894, 17693, 17660, 17660, 17660, 17660, 17660, 17660, 17660, 17759, 6306, 6404, 6405, 6405, 6404, 8485, 6404, 6404, 8485, 8485, 6404, 6404, 6404, 8485, 6404, 
    8485, 8485, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 8485, 6405, 6404, 6405, 6404, 6306, 17759, 17759, 17758, 17726, 17693, 17758, 10926, 17693, 17660, 17660, 17660, 17660, 17660, 17660, 17660, 17759, 6306, 8484, 6405, 8485, 6404, 8485, 8485, 6404, 8485, 6436, 6404, 6404, 8485, 6404, 6404, 
    6404, 8485, 6404, 6404, 6404, 8485, 6405, 8485, 8485, 6404, 6404, 8485, 6405, 6404, 6404, 6404, 6273, 6371, 8584, 10796, 10960, 15318, 10828, 17693, 17791, 17758, 17726, 17725, 17693, 17693, 17660, 17759, 6306, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6405, 8485, 6404, 6404, 6404, 6404, 6404, 
    8485, 6404, 6404, 8485, 8485, 6404, 6404, 6404, 8485, 6404, 6405, 8485, 6404, 6404, 6404, 6405, 8485, 6404, 6404, 6372, 6371, 6338, 6371, 6306, 6339, 8550, 10763, 10959, 13171, 15383, 15547, 19967, 6306, 6404, 8485, 6404, 8485, 8485, 6404, 6404, 8485, 8484, 8485, 8485, 6404, 6404, 6404, 
    8485, 8485, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6405, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6372, 6371, 6339, 6306, 6306, 6274, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 6405, 6404, 8485, 6404, 6404, 6404, 6404, 
    8485, 6404, 6404, 6404, 8485, 8485, 6404, 6404, 6404, 8485, 8485, 8485, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 6405, 6405, 6404, 8485, 8485, 8485, 8485, 6404, 6404, 6404, 6404, 6404, 6404, 8485, 8485, 6405, 8485, 6404, 6404, 6404, 6404, 8485, 8485, 6404, 6404, 6404, 8485, 
    6405, 6404, 8485, 6404, 6404, 6405, 6404, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 8485, 6404, 6405, 8485, 8485, 6404, 6405, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 6405, 8452, 8485, 6404, 6404, 6404, 6404, 8485, 6404, 6405, 8485, 6404, 6404, 8485, 
    6404, 6404, 6404, 6405, 6404, 8485, 8485, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 6405, 8485, 6404, 6404, 8485, 8485, 6404, 6404, 6404, 6405, 8485, 8485, 6404, 6405, 6404, 6404, 8485, 6404, 6404, 8485, 6404, 6404, 6404, 
    6404, 6404, 6404, 6405, 8453, 6404, 6404, 6404, 8485, 6404, 6404, 6405, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6405, 6404, 6404, 6404, 6405, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 8485, 
    6404, 6404, 6404, 8485, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 8485, 8485, 8485, 6405, 8453, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 8485, 8485, 8485, 6404, 8485, 6404, 8485, 6405, 6404, 8485, 8485, 6404, 6404, 8485, 8485, 6405, 8485, 6404, 6404, 6404, 8485, 8485, 6404, 
    6404, 6404, 8485, 8485, 8485, 8485, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6405, 6404, 8485, 8485, 6404, 8485, 6405, 6404, 8485, 8485, 8453, 6405, 8485, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 8485, 8485, 6404, 6404, 6404, 
    8453, 8485, 6404, 6405, 6404, 6404, 6405, 6404, 6404, 6404, 8453, 6404, 8485, 6405, 6404, 6404, 6404, 8485, 8485, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6405, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 6404, 8485, 8485, 8485, 6404, 6404, 8485, 8485, 6404, 8485, 8485, 6404, 6404, 
    6404, 6404, 8485, 6404, 8485, 8485, 6404, 6404, 6404, 6404, 8485, 8485, 6405, 6404, 8485, 8485, 6404, 6404, 6404, 8485, 8485, 6405, 6404, 6404, 6404, 8485, 8485, 6404, 8485, 6405, 6404, 8485, 8485, 6404, 6405, 6405, 8485, 8484, 8485, 8485, 6404, 6404, 8485, 6404, 8485, 8485, 6404, 
    8485, 8485, 6404, 8485, 8485, 8484, 8485, 6404, 8485, 6404, 6404, 6405, 6404, 6404, 6404, 6404, 8485, 6405, 6404, 6404, 6404, 6404, 6404, 8485, 6405, 8485, 6404, 8485, 6404, 8485, 6404, 8485, 6405, 6404, 6404, 6404, 6404, 6405, 6404, 6405, 6404, 6404, 6404, 6404, 6404, 6404, 8485, 
    6404, 6404, 6405, 8485, 6404, 6405, 6404, 6405, 6404, 8485, 6404, 8485, 6404, 6404, 8485, 6405, 8485, 6404, 6404, 8453, 6404, 8485, 6404, 6405, 6404, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 6405, 8485, 8485, 8485, 8485, 8485, 8485, 6404, 6404, 8485, 8485, 8485, 8485, 8485, 8485, 
    6404, 8485, 6404, 8485, 6404, 8485, 6405, 6404, 8485, 6404, 6404, 6404, 6404, 6405, 8485, 6404, 6404, 8485, 8485, 8485, 8485, 8485, 6404, 6404, 6404, 6404, 8485, 6405, 8485, 6404, 6404, 8485, 8485, 6404, 8485, 8485, 8485, 6404, 6404, 6404, 8485, 6404, 6404, 6404, 8485, 6404, 8484, 
};
extern const BITMAP_INFO start_icon_click_bmp;
const BITMAP_INFO start_icon_click_bmp ={
    47,
    38,
    16,
    (unsigned char*)raw_data
};
