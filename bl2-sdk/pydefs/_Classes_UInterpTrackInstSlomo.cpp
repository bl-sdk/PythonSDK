#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSlomo()
{
    class_< UInterpTrackInstSlomo, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstSlomo", no_init)
        .def_readwrite("OldTimeDilation", &UInterpTrackInstSlomo::OldTimeDilation)
        .def("StaticClass", &UInterpTrackInstSlomo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}