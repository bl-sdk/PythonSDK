#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInst()
{
    class_< UInterpTrackInst, bases< UObject >  , boost::noncopyable>("UInterpTrackInst", no_init)
        .def("StaticClass", &UInterpTrackInst::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}