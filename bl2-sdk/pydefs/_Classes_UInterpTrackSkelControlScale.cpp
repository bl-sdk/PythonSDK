#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackSkelControlScale()
{
    class_< UInterpTrackSkelControlScale, bases< UInterpTrackFloatBase >  , boost::noncopyable>("UInterpTrackSkelControlScale", no_init)
        .def_readwrite("SkelControlName", &UInterpTrackSkelControlScale::SkelControlName)
        .def("StaticClass", &UInterpTrackSkelControlScale::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}