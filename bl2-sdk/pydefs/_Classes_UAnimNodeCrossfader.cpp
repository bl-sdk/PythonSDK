#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeCrossfader(py::module &m)
{
    py::class_< UAnimNodeCrossfader,  UAnimNodeBlend   >(m, "UAnimNodeCrossfader")
		.def_static("StaticClass", &UAnimNodeCrossfader::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefaultAnimSeqName", &UAnimNodeCrossfader::DefaultAnimSeqName)
        .def_readwrite("PendingBlendOutTimeOneShot", &UAnimNodeCrossfader::PendingBlendOutTimeOneShot)
        .def("GetActiveChild", &UAnimNodeCrossfader::GetActiveChild, py::return_value_policy::reference)
        .def("GetAnimName", &UAnimNodeCrossfader::GetAnimName)
        .def("BlendToLoopingAnim", &UAnimNodeCrossfader::BlendToLoopingAnim)
        .def("PlayOneShotAnim", &UAnimNodeCrossfader::PlayOneShotAnim)
          ;
}