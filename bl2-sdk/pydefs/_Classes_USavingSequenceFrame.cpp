#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USavingSequenceFrame()
{
    class_< USavingSequenceFrame, bases< USequenceFrame >  , boost::noncopyable>("USavingSequenceFrame", no_init)
        .def("StaticClass", &USavingSequenceFrame::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}