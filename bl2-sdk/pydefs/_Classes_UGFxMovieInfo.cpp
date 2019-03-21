#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieInfo()
{
    class_< UGFxMovieInfo, bases< USwfMovie >  , boost::noncopyable>("UGFxMovieInfo", no_init)
        .def("StaticClass", &UGFxMovieInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}