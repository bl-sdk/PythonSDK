#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEmoteStance(py::module &m)
{
    py::class_< FEmoteStance >(m, "FEmoteStance")
        .def_readwrite("Emote", &FEmoteStance::Emote)
        .def_readwrite("StanceSpecialMove", &FEmoteStance::StanceSpecialMove)
  ;
}