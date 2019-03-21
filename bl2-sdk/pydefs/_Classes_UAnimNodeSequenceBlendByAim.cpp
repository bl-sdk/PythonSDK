#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeSequenceBlendByAim(py::object m)
{
    py::class_< UAnimNodeSequenceBlendByAim,  UAnimNodeSequenceBlendBase   >(m, "UAnimNodeSequenceBlendByAim")
        .def_readwrite("Aim", &UAnimNodeSequenceBlendByAim::Aim)
        .def_readwrite("PreviousAim", &UAnimNodeSequenceBlendByAim::PreviousAim)
        .def_readwrite("HorizontalRange", &UAnimNodeSequenceBlendByAim::HorizontalRange)
        .def_readwrite("VerticalRange", &UAnimNodeSequenceBlendByAim::VerticalRange)
        .def_readwrite("AngleOffset", &UAnimNodeSequenceBlendByAim::AngleOffset)
        .def_readwrite("AnimName_LU", &UAnimNodeSequenceBlendByAim::AnimName_LU)
        .def_readwrite("AnimName_LC", &UAnimNodeSequenceBlendByAim::AnimName_LC)
        .def_readwrite("AnimName_LD", &UAnimNodeSequenceBlendByAim::AnimName_LD)
        .def_readwrite("AnimName_CU", &UAnimNodeSequenceBlendByAim::AnimName_CU)
        .def_readwrite("AnimName_CC", &UAnimNodeSequenceBlendByAim::AnimName_CC)
        .def_readwrite("AnimName_CD", &UAnimNodeSequenceBlendByAim::AnimName_CD)
        .def_readwrite("AnimName_RU", &UAnimNodeSequenceBlendByAim::AnimName_RU)
        .def_readwrite("AnimName_RC", &UAnimNodeSequenceBlendByAim::AnimName_RC)
        .def_readwrite("AnimName_RD", &UAnimNodeSequenceBlendByAim::AnimName_RD)
        .def("StaticClass", &UAnimNodeSequenceBlendByAim::StaticClass, py::return_value_policy::reference)
        .def("CheckAnimsUpToDate", &UAnimNodeSequenceBlendByAim::CheckAnimsUpToDate)
          ;
}