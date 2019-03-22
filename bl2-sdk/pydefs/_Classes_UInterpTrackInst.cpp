#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInst(py::module &m)
{
    py::class_< UInterpTrackInst,  UObject   >(m, "UInterpTrackInst")
        .def("StaticClass", &UInterpTrackInst::StaticClass, py::return_value_policy::reference)
          ;
}