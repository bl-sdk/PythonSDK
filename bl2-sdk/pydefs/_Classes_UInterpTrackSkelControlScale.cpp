#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackSkelControlScale(py::object m)
{
    py::class_< UInterpTrackSkelControlScale,  UInterpTrackFloatBase   >(m, "UInterpTrackSkelControlScale")
        .def_readwrite("SkelControlName", &UInterpTrackSkelControlScale::SkelControlName)
        .def("StaticClass", &UInterpTrackSkelControlScale::StaticClass, py::return_value_policy::reference)
          ;
}