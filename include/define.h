#undef CATCHMENT
#define GRIDBASED   ! CATCHMENT / GRIDBASED / SinglePoint
#define PFT_CLASSIFICATION       ! IGBP_CLASSIFICATION / USGS_CLASSIFICATION / PFT_CLASSIFICATION / PC_CLASSIFICATION
#define LANDONLY

#define CLMDEBUG
#define  USEMPI

#define Campbell_SOIL_MODEL  ! Campbell_SOIL_MODEL / vanGenuchten_Mualem_SOIL_MODEL
#undef VARIABLY_SATURATED_FLOW
#undef vsf_statistics
#undef USE_DEPTH_TO_BEDROCK
#undef  CoLM_hydro_DEBUG

#undef  vanGenuchten_Mualem_SOIL_MODEL
#undef SOILPAR_UPS_FIT
#define THERMAL_CONDUCTIVITY_SCHEME_4

#define PLANT_HYDRAULIC_STRESS
#undef  DYN_PHENOLOGY
#undef  SOILINI
#undef  SOIL_REFL_GUESSED
#define SOIL_REFL_READ

#undef  CaMa_Flood

#define CROP
#define BGC
#define LAIfdbk
#define SASU
#define OzoneStress
#define FERT
#define NITRIF

#ifdef SinglePoint
#undef USEMPI
#endif

#ifndef PFT_CLASSIFICATION
#undef CROP
#endif

#ifdef BGC
#define PFT_CLASSIFICATION
#endif

#ifndef VARIABLY_SATURATED_FLOW
#undef  USE_DEPTH_TO_BEDROCK
#define Campbell_SOIL_MODEL
#undef  vanGenuchten_Mualem_SOIL_MODEL
#endif
