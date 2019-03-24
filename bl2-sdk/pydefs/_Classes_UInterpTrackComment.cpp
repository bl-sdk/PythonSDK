#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackComment(py::module &m)
{
    py::class_< UInterpTrackComment,  UInterpTrack   >(m, "UInterpTrackComment")
		.def_static("StaticClass", &UInterpTrackComment::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CommentTrack", &UInterpTrackComment::CommentTrack)
          ;
}