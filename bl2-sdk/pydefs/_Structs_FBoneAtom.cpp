#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBoneAtom()
{
    class_< FBoneAtom >("FBoneAtom", no_init)
        .def_readwrite("Rotation", &FBoneAtom::Rotation)
        .def_readwrite("Translation", &FBoneAtom::Translation)
        .def_readwrite("Scale", &FBoneAtom::Scale)
  ;
}