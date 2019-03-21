#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGammaScreenGFxMovie()
{
    class_< UGammaScreenGFxMovie, bases< UWillowGFxMovie3D >  , boost::noncopyable>("UGammaScreenGFxMovie", no_init)
        .def("StaticClass", &UGammaScreenGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}