#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackColorScale()
{
    class_< UInterpTrackColorScale, bases< UInterpTrackVectorBase >  , boost::noncopyable>("UInterpTrackColorScale", no_init)
        .def("StaticClass", &UInterpTrackColorScale::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}