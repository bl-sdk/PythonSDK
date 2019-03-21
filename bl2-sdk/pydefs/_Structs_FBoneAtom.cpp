#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBoneAtom(py::object m)
{
    py::class_< FBoneAtom >(m, "FBoneAtom")
        .def_readwrite("Rotation", &FBoneAtom::Rotation)
        .def_readwrite("Translation", &FBoneAtom::Translation)
        .def_readwrite("Scale", &FBoneAtom::Scale)
  ;
}