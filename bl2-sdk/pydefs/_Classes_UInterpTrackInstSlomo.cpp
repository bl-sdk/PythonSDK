#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSlomo(py::module &m)
{
    py::class_< UInterpTrackInstSlomo,  UInterpTrackInst   >(m, "UInterpTrackInstSlomo")
        .def_readwrite("OldTimeDilation", &UInterpTrackInstSlomo::OldTimeDilation)
        .def("StaticClass", &UInterpTrackInstSlomo::StaticClass, py::return_value_policy::reference)
          ;
}