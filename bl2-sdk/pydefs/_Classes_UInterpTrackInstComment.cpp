#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstComment(py::module &m)
{
    py::class_< UInterpTrackInstComment,  UInterpTrackInst   >(m, "UInterpTrackInstComment")
		.def_static("StaticClass", &UInterpTrackInstComment::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstComment::LastUpdatePosition)
          ;
}