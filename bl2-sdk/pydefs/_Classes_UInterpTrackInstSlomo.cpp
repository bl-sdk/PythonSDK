#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSlomo()
{
    py::class_< UInterpTrackInstSlomo,  UInterpTrackInst   >("UInterpTrackInstSlomo")
        .def_readwrite("OldTimeDilation", &UInterpTrackInstSlomo::OldTimeDilation)
        .def("StaticClass", &UInterpTrackInstSlomo::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}