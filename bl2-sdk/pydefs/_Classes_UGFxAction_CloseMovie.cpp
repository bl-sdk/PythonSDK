#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxAction_CloseMovie()
{
    class_< UGFxAction_CloseMovie, bases< USequenceAction >  , boost::noncopyable>("UGFxAction_CloseMovie", no_init)
        .def_readwrite("Movie", &UGFxAction_CloseMovie::Movie)
        .def("StaticClass", &UGFxAction_CloseMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventIsValidLevelSequenceObject", &UGFxAction_CloseMovie::eventIsValidLevelSequenceObject)
        .staticmethod("StaticClass")
  ;
}