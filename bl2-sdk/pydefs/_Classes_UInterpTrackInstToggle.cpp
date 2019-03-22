#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstToggle(py::module &m)
{
    py::class_< UInterpTrackInstToggle,  UInterpTrackInst   >(m, "UInterpTrackInstToggle")
        .def_readwrite("Action", &UInterpTrackInstToggle::Action)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstToggle::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstToggle::StaticClass, py::return_value_policy::reference)
          ;
}