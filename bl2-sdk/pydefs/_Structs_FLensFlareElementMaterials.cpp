#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLensFlareElementMaterials()
{
    class_< FLensFlareElementMaterials >("FLensFlareElementMaterials", no_init)
        .def_readwrite("ElementMaterials", &FLensFlareElementMaterials::ElementMaterials)
  ;
}