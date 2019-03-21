#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSkelControlScale()
{
    class_< UInterpTrackInstSkelControlScale, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstSkelControlScale", no_init)
        .def("StaticClass", &UInterpTrackInstSkelControlScale::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}