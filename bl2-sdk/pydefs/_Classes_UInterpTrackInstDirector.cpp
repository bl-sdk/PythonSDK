#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstDirector(py::module &m)
{
    py::class_< UInterpTrackInstDirector,  UInterpTrackInst   >(m, "UInterpTrackInstDirector")
        .def_readwrite("OldViewTarget", &UInterpTrackInstDirector::OldViewTarget)
        .def_readwrite("OldRenderingOverrides", &UInterpTrackInstDirector::OldRenderingOverrides)
        .def("StaticClass", &UInterpTrackInstDirector::StaticClass, py::return_value_policy::reference)
          ;
}