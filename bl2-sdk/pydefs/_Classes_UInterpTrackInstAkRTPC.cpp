#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAkRTPC()
{
    py::class_< UInterpTrackInstAkRTPC,  UInterpTrackInst   >("UInterpTrackInstAkRTPC")
        .def("StaticClass", &UInterpTrackInstAkRTPC::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}