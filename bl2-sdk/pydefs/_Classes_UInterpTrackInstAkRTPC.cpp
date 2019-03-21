#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAkRTPC(py::object m)
{
    py::class_< UInterpTrackInstAkRTPC,  UInterpTrackInst   >(m, "UInterpTrackInstAkRTPC")
        .def("StaticClass", &UInterpTrackInstAkRTPC::StaticClass, py::return_value_policy::reference)
          ;
}