#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_CharacterDialog()
{
    class_< URES_CharacterDialog, bases< UActionResource >  , boost::noncopyable>("URES_CharacterDialog", no_init)
        .def("StaticClass", &URES_CharacterDialog::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}