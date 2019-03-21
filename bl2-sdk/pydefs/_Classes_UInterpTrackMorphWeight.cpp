#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackMorphWeight()
{
    class_< UInterpTrackMorphWeight, bases< UInterpTrackFloatBase >  , boost::noncopyable>("UInterpTrackMorphWeight", no_init)
        .def_readwrite("MorphNodeName", &UInterpTrackMorphWeight::MorphNodeName)
        .def("StaticClass", &UInterpTrackMorphWeight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}