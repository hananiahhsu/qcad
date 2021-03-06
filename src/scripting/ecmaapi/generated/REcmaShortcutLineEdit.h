// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASHORTCUTLINEEDIT_H
        #define RECMASHORTCUTLINEEDIT_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RShortcutLineEdit.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaShortcutLineEdit {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQLineEdit(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RShortcutLineEdit* getSelf(const QString& fName, QScriptContext* context)
    ;static RShortcutLineEdit* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        RShortcutLineEdit*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RShortcutLineEdit*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        RShortcutLineEdit*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    };
    #endif
    