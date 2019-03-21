#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstComment()
{
    py::class_< UInterpTrackInstComment,  UInterpTrackInst   >("UInterpTrackInstComment")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstComment::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstComment::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}