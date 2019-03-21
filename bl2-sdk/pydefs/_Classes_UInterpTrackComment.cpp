#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackComment(py::object m)
{
    py::class_< UInterpTrackComment,  UInterpTrack   >(m, "UInterpTrackComment")
        .def_readwrite("CommentTrack", &UInterpTrackComment::CommentTrack)
        .def("StaticClass", &UInterpTrackComment::StaticClass, py::return_value_policy::reference)
          ;
}