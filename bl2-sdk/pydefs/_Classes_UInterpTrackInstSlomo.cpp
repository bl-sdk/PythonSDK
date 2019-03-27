#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSlomo(py::module &m)
{
    py::class_< UInterpTrackInstSlomo,  UInterpTrackInst   >(m, "UInterpTrackInstSlomo")
		.def_static("StaticClass", &UInterpTrackInstSlomo::StaticClass, py::return_value_policy::reference)
        .def_readwrite("OldTimeDilation", &UInterpTrackInstSlomo::OldTimeDilation)
          ;
}