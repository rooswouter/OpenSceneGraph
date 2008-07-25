// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osgWidget/Box>
#include <osgWidget/Frame>
#include <osgWidget/Input>
#include <osgWidget/Label>
#include <osgWidget/StyleManager>
#include <osgWidget/Widget>
#include <osgWidget/Window>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgWidget::Style)
	I_DeclaringFile("osgWidget/StyleManager");
	I_BaseType(osg::Object);
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_ConstructorWithDefaults2(IN, const std::string &, x, "", IN, const std::string &, x, "",
	                           ____Style__C5_std_string_R1__C5_std_string_R1,
	                           "",
	                           "");
	I_Constructor2(IN, const osgWidget::Style &, x, IN, const osg::CopyOp &, x,
	               ____Style__C5_Style_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method2(bool, applyStyle, IN, osgWidget::Widget *, x, IN, osgWidget::Reader, x,
	          Properties::VIRTUAL,
	          __bool__applyStyle__Widget_P1__Reader,
	          "",
	          "");
	I_Method2(bool, applyStyle, IN, osgWidget::Label *, x, IN, osgWidget::Reader, x,
	          Properties::VIRTUAL,
	          __bool__applyStyle__Label_P1__Reader,
	          "",
	          "");
	I_Method2(bool, applyStyle, IN, osgWidget::Input *, x, IN, osgWidget::Reader, x,
	          Properties::VIRTUAL,
	          __bool__applyStyle__Input_P1__Reader,
	          "",
	          "");
	I_Method2(bool, applyStyle, IN, osgWidget::Window *, x, IN, osgWidget::Reader, x,
	          Properties::VIRTUAL,
	          __bool__applyStyle__Window_P1__Reader,
	          "",
	          "");
	I_Method2(bool, applyStyle, IN, osgWidget::Window::EmbeddedWindow *, x, IN, osgWidget::Reader, x,
	          Properties::VIRTUAL,
	          __bool__applyStyle__Window_EmbeddedWindow_P1__Reader,
	          "",
	          "");
	I_Method2(bool, applyStyle, IN, osgWidget::Box *, x, IN, osgWidget::Reader, x,
	          Properties::VIRTUAL,
	          __bool__applyStyle__Box_P1__Reader,
	          "",
	          "");
	I_Method2(bool, applyStyle, IN, osgWidget::Frame::Corner *, x, IN, osgWidget::Reader, x,
	          Properties::VIRTUAL,
	          __bool__applyStyle__Frame_Corner_P1__Reader,
	          "",
	          "");
	I_Method2(bool, applyStyle, IN, osgWidget::Frame::Border *, x, IN, osgWidget::Reader, x,
	          Properties::VIRTUAL,
	          __bool__applyStyle__Frame_Border_P1__Reader,
	          "",
	          "");
	I_Method1(void, setStyle, IN, const std::string &, style,
	          Properties::NON_VIRTUAL,
	          __void__setStyle__C5_std_string_R1,
	          "",
	          "");
	I_Method0(std::string &, getStyle,
	          Properties::NON_VIRTUAL,
	          __std_string_R1__getStyle,
	          "",
	          "");
	I_Method0(const std::string &, getStyle,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getStyle,
	          "",
	          "");
	I_StaticMethod1(osgWidget::Widget::LAYER, strToLayer, IN, const std::string &, x,
	                __Widget_LAYER__strToLayer__C5_std_string_R1_S,
	                "",
	                "");
	I_StaticMethod1(osgWidget::Widget::VERTICAL_ALIGNMENT, strToVAlign, IN, const std::string &, x,
	                __Widget_VERTICAL_ALIGNMENT__strToVAlign__C5_std_string_R1_S,
	                "",
	                "");
	I_StaticMethod1(osgWidget::Widget::HORIZONTAL_ALIGNMENT, strToHAlign, IN, const std::string &, x,
	                __Widget_HORIZONTAL_ALIGNMENT__strToHAlign__C5_std_string_R1_S,
	                "",
	                "");
	I_StaticMethod1(osgWidget::Widget::COORDINATE_MODE, strToCoordMode, IN, const std::string &, x,
	                __Widget_COORDINATE_MODE__strToCoordMode__C5_std_string_R1_S,
	                "",
	                "");
	I_StaticMethod1(bool, strToFill, IN, const std::string &, x,
	                __bool__strToFill__C5_std_string_R1_S,
	                "",
	                "");
	I_ProtectedMethod2(bool, _match, IN, const char *, seq, IN, osgWidget::Reader, r,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool___match__C5_char_P1__Reader,
	                   "",
	                   "");
	I_SimpleProperty(const std::string &, Style, 
	                 __C5_std_string_R1__getStyle, 
	                 __void__setStyle__C5_std_string_R1);
END_REFLECTOR

TYPE_NAME_ALIAS(std::map< std::string COMMA  osg::ref_ptr< osgWidget::Style > >, osgWidget::StyleManager::Styles)

TYPE_NAME_ALIAS(osgWidget::StyleManager::Styles::iterator, osgWidget::StyleManager::Iterator)

TYPE_NAME_ALIAS(osgWidget::StyleManager::Styles::const_iterator, osgWidget::StyleManager::ConstIterator)

BEGIN_OBJECT_REFLECTOR(osgWidget::StyleManager)
	I_DeclaringFile("osgWidget/StyleManager");
	I_BaseType(osg::Object);
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Constructor0(____StyleManager,
	               "",
	               "");
	I_Constructor2(IN, const osgWidget::StyleManager &, x, IN, const osg::CopyOp &, x,
	               ____StyleManager__C5_StyleManager_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method1(bool, addStyle, IN, osgWidget::Style *, x,
	          Properties::NON_VIRTUAL,
	          __bool__addStyle__Style_P1,
	          "",
	          "");
	I_Method1(bool, applyStyles, IN, osgWidget::Widget *, widget,
	          Properties::NON_VIRTUAL,
	          __bool__applyStyles__Widget_P1,
	          "",
	          "");
	I_Method1(bool, applyStyles, IN, osgWidget::Window *, window,
	          Properties::NON_VIRTUAL,
	          __bool__applyStyles__Window_P1,
	          "",
	          "");
END_REFLECTOR

TYPE_NAME_ALIAS(osgDB::FieldReaderIterator &, osgWidget::Reader)

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgWidget::Style >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgWidget::Style *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgWidget::Style > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgWidget::Style *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgWidget::Style *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgWidget::Style > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgWidget::Style *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< std::string COMMA  osg::ref_ptr< osgWidget::Style > >)

