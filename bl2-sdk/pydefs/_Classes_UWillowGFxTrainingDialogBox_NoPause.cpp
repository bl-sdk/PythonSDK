#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxTrainingDialogBox_NoPause()
{
    class_< UWillowGFxTrainingDialogBox_NoPause, bases< UWillowGFxTrainingDialogBox >  , boost::noncopyable>("UWillowGFxTrainingDialogBox_NoPause", no_init)
        .def("StaticClass", &UWillowGFxTrainingDialogBox_NoPause::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}