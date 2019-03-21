#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFlashMovie()
{
    class_< UFlashMovie, bases< USwfMovie >  , boost::noncopyable>("UFlashMovie", no_init)
        .def("StaticClass", &UFlashMovie::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}