#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFaceFX()
{
    py::class_< UInterpTrackInstFaceFX,  UInterpTrackInst   >("UInterpTrackInstFaceFX")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstFaceFX::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstFaceFX::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}