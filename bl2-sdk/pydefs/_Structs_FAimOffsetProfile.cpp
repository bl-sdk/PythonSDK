#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAimOffsetProfile()
{
    py::class_< FAimOffsetProfile >("FAimOffsetProfile")
        .def_readwrite("ProfileName", &FAimOffsetProfile::ProfileName)
        .def_readwrite("HorizontalRange", &FAimOffsetProfile::HorizontalRange)
        .def_readwrite("VerticalRange", &FAimOffsetProfile::VerticalRange)
        .def_readwrite("AimComponents", &FAimOffsetProfile::AimComponents)
        .def_readwrite("AimTransformsCache", &FAimOffsetProfile::AimTransformsCache)
        .def_readwrite("AnimName_LU", &FAimOffsetProfile::AnimName_LU)
        .def_readwrite("AnimName_LC", &FAimOffsetProfile::AnimName_LC)
        .def_readwrite("AnimName_LD", &FAimOffsetProfile::AnimName_LD)
        .def_readwrite("AnimName_CU", &FAimOffsetProfile::AnimName_CU)
        .def_readwrite("AnimName_CC", &FAimOffsetProfile::AnimName_CC)
        .def_readwrite("AnimName_CD", &FAimOffsetProfile::AnimName_CD)
        .def_readwrite("AnimName_RU", &FAimOffsetProfile::AnimName_RU)
        .def_readwrite("AnimName_RC", &FAimOffsetProfile::AnimName_RC)
        .def_readwrite("AnimName_RD", &FAimOffsetProfile::AnimName_RD)
  ;
}